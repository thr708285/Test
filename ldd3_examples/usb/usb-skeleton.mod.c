#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x355992de, "module_layout" },
	{ 0xb6d47bc4, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x456e1655, "usb_buffer_alloc" },
	{ 0xcff53400, "kref_put" },
	{ 0xee6f94ef, "dev_set_drvdata" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xb83d3f27, "usb_buffer_free" },
	{ 0x3ad40c35, "usb_deregister_dev" },
	{ 0xa79cbad4, "usb_deregister" },
	{ 0xb72397d5, "printk" },
	{ 0x3656bf5a, "lock_kernel" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xf34d6f92, "usb_register_dev" },
	{ 0xb1f975aa, "unlock_kernel" },
	{ 0xfb9c1664, "usb_submit_urb" },
	{ 0xde4e44c2, "kmem_cache_alloc" },
	{ 0x3cacdbd9, "usb_get_dev" },
	{ 0x79c3f08e, "usb_bulk_msg" },
	{ 0x42e68446, "usb_put_dev" },
	{ 0x5f71b710, "usb_find_interface" },
	{ 0x3ae831b6, "kref_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x8a1203a9, "kref_get" },
	{ 0xff49d838, "usb_register_driver" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x4d246d17, "dev_get_drvdata" },
	{ 0x1ea9bc33, "usb_free_urb" },
	{ 0x7b65ab84, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "8D2B7EBD19C4276798E00CE");
