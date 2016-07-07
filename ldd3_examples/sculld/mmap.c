/*  -*- C -*-
 * mmap.c -- memory mapping for the sculld char module
 *
 * Copyright (C) 2001 Alessandro Rubini and Jonathan Corbet
 * Copyright (C) 2001 O'Reilly & Associates
 *
 * The source code in this file can be freely used, adapted,
 * and redistributed in source or binary form, so long as an
 * acknowledgment appears in derived source files.  The citation
 * should list that the code comes from the book "Linux Device
 * Drivers" by Alessandro Rubini and Jonathan Corbet, published
 * by O'Reilly & Associates.   No warranty is attached;
 * we cannot take responsibility for errors or fitness for use.
 *
 * $Id: _mmap.c.in,v 1.13 2004/10/18 18:07:36 corbet Exp $
 */

//#include <linux/config.h>
#include <linux/module.h>

#include <linux/mm.h>		/* everything */
#include <linux/fs.h>
#include <linux/errno.h>	/* error codes */
#include <asm/pgtable.h>

#include "sculld.h"		/* local definitions */


/*
 * open and close: just keep track of how many times the device is
 * mapped, to avoid releasing it.
 */

void sculld_vma_open(struct vm_area_struct *vma)
{
	struct sculld_dev *dev = vma->vm_private_data;

	dev->vmas++;
}

void sculld_vma_close(struct vm_area_struct *vma)
{
	struct sculld_dev *dev = vma->vm_private_data;

	dev->vmas--;
}

/*
 * The nopage method: the core of the file. It retrieves the
 * page required from the sculld device and returns it to the
 * user. The count for the page must be incremented, because
 * it is automatically decremented at page unmap.
 *
 * For this reason, "order" must be zero. Otherwise, only the first
 * page has its count incremented, and the allocating module must
 * release it as a whole block. Therefore, it isn't possible to map
 * pages from a multipage block: when they are unmapped, their count
 * is individually decreased, and would drop to 0.
 */

 int sculld_vma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
{
	struct sculld_dev *ptr, *dev = vma->vm_private_data;
	struct page *pageptr = NULL; /* default to "missing" */
	unsigned long physaddr;
	unsigned long pageframe;
	
	down(&dev->sem);
	physaddr = (unsigned long)((vmf->virtual_address - vma->vm_start) + (vma->vm_pgoff << PAGE_SHIFT));
  if (physaddr >= dev->size) { 
  up(&dev->sem);
  return VM_FAULT_NOPAGE;
  } /* out of range */
  
	/*
	 * Now retrieve the sculld device from the list,then the page.
	 * If the device has holes, the process receives a SIGBUS when
	 * accessing the hole.
	 */
  pageframe = physaddr >> PAGE_SHIFT; /* offset is a number of pages */
  for (ptr = dev; ptr && pageframe >= dev->qset;) {		ptr = ptr->next;
    ptr = ptr->next;
		pageframe -= dev->qset;
	}
  if (ptr && ptr->data) pageptr = ptr->data[pageframe];
  if (!pageptr) { 
  up(&dev->sem);
  return VM_FAULT_NOPAGE;
  } /* hole or end-of-file */
  pageptr = pfn_to_page(pageframe);

	/* got it, now increment the count */
	get_page(pageptr);
  vmf->page = pageptr;
	up(&dev->sem);
	return 0;
}



struct vm_operations_struct sculld_vm_ops = {
	.open =     sculld_vma_open,
	.close =    sculld_vma_close,
	.fault = sculld_vma_fault,
};


int sculld_mmap(struct file *filp, struct vm_area_struct *vma)
{
	struct inode *inode = vma->vm_file->f_path.dentry->d_inode;

	/* refuse to map if order is not 0 */
	if (sculld_devices[iminor(inode)].order)
		return -ENODEV;

	/* don't do anything here: "nopage" will set up page table entries */
	vma->vm_ops = &sculld_vm_ops;
	vma->vm_flags |= VM_RESERVED;
	vma->vm_private_data = filp->private_data;
	sculld_vma_open(vma);
	return 0;
}
