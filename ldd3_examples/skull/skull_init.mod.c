#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x355992de, "module_layout" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xff964b25, "param_set_int" },
	{ 0x59d8223a, "ioport_resource" },
	{ 0xb72397d5, "printk" },
	{ 0xb4390f9a, "mcount" },
	{ 0xb8aa2342, "__check_region" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0x3af98f9e, "ioremap_nocache" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F3166AF6C5CBEA653133DBF");
