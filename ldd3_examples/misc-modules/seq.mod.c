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
	{ 0x12981f8d, "seq_open" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0x42139ef1, "seq_printf" },
	{ 0xd8a1487d, "remove_proc_entry" },
	{ 0x8463ca77, "seq_read" },
	{ 0xb4390f9a, "mcount" },
	{ 0xde4e44c2, "kmem_cache_alloc" },
	{ 0x61e85ad4, "create_proc_entry" },
	{ 0x890bd906, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x645c4fc, "seq_release" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BCEFFA8CB4F6FFCC551CD45");
