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
	{ 0x570cfb41, "pci_bus_read_config_byte" },
	{ 0xb4390f9a, "mcount" },
	{ 0x814a85b6, "pci_unregister_driver" },
	{ 0xcc6ebec3, "__pci_register_driver" },
	{ 0xccc986bb, "pci_enable_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AEABB5B0EA0BB78C117B11F");
