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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xadf42bd5, "__request_region" },
	{ 0x126bda94, "per_cpu__current_task" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x788fe103, "iomem_resource" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3457cb68, "param_set_long" },
	{ 0xc633495b, "schedule_work" },
	{ 0x7bc80493, "__register_chrdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xff964b25, "param_set_int" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x59d8223a, "ioport_resource" },
	{ 0xf10de535, "ioread8" },
	{ 0xb72397d5, "printk" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb4390f9a, "mcount" },
	{ 0xfda85a7d, "request_threaded_irq" },
	{ 0xab600421, "probe_irq_off" },
	{ 0x3af98f9e, "ioremap_nocache" },
	{ 0x8bd5b603, "param_get_long" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x4292364c, "schedule" },
	{ 0x727c4f3, "iowrite8" },
	{ 0xc9068abc, "pv_cpu_ops" },
	{ 0x9bce482f, "__release_region" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x1d2e87c6, "do_gettimeofday" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x37a0cba, "kfree" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0xedc03953, "iounmap" },
	{ 0x9ccb2622, "finish_wait" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2CAAA994A2A6F5998C7F695");
