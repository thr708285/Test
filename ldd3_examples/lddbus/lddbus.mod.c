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
	{ 0x94aa8400, "bus_register" },
	{ 0x3189d4df, "driver_register" },
	{ 0xd0d8621b, "strlen" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x8b7db255, "device_register" },
	{ 0xb72397d5, "printk" },
	{ 0xb54f9fbd, "driver_unregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x6c2e3320, "strncmp" },
	{ 0xbb1e85ea, "bus_unregister" },
	{ 0xa68381e6, "driver_create_file" },
	{ 0x66fc6128, "bus_create_file" },
	{ 0xd49f211c, "device_unregister" },
	{ 0x701d0ebd, "snprintf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2575F7759C763E20199BF57");
