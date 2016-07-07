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
	{ 0x126bda94, "per_cpu__current_task" },
	{ 0xb6d47bc4, "kmalloc_caches" },
	{ 0x79a5a3cb, "single_open" },
	{ 0x6307fc98, "del_timer" },
	{ 0x1dbef138, "single_release" },
	{ 0x71356fba, "remove_wait_queue" },
	{ 0xc59103cb, "alloc_tty_driver" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x42139ef1, "seq_printf" },
	{ 0x6df5002b, "tty_register_driver" },
	{ 0xde6287c4, "tty_buffer_request_room" },
	{ 0xb7eb3f0, "put_tty_driver" },
	{ 0x8463ca77, "seq_read" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4fe9b65f, "tty_set_operations" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xd29e960a, "tty_get_baud_rate" },
	{ 0xb72397d5, "printk" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0x748caf40, "down" },
	{ 0x46085e4f, "add_timer" },
	{ 0xa2eefbd4, "tty_insert_flip_string_flags" },
	{ 0x32267d73, "tty_register_device" },
	{ 0x6e7bd1e1, "tty_unregister_device" },
	{ 0xde4e44c2, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x4292364c, "schedule" },
	{ 0x52554f7b, "tty_unregister_driver" },
	{ 0x650fb346, "add_wait_queue" },
	{ 0x890bd906, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f1899f1, "up" },
	{ 0xb71b765, "tty_flip_buffer_push" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CDE3D83C286CB29882BA45E");
