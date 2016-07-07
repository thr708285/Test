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
	{ 0xb5f209e8, "blk_init_queue" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6c682703, "alloc_disk" },
	{ 0x2aaafda7, "blk_cleanup_queue" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xff964b25, "param_set_int" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd1e890f9, "kunmap_atomic" },
	{ 0x3d03843, "kmap_atomic" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0x66cbffa6, "blk_alloc_queue" },
	{ 0x991146c2, "check_disk_change" },
	{ 0xb72397d5, "printk" },
	{ 0x3f161d5b, "del_gendisk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x46085e4f, "add_timer" },
	{ 0x48b34ef2, "bio_endio" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7872d84, "blk_queue_make_request" },
	{ 0x4234cb23, "put_disk" },
	{ 0x6e7dfe2e, "__blk_end_request_cur" },
	{ 0x2e68a2b6, "blk_fetch_request" },
	{ 0xb8360286, "__blk_end_request_all" },
	{ 0x37a0cba, "kfree" },
	{ 0xd006eed, "add_disk" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xc58dfafd, "blk_queue_logical_block_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "033BA42910A286081DE54B3");
