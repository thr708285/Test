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
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x3457cb68, "param_set_long" },
	{ 0xeb1fabf6, "interruptible_sleep_on" },
	{ 0xc633495b, "schedule_work" },
	{ 0xd8a1487d, "remove_proc_entry" },
	{ 0x6a9f26c9, "init_timer_key" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xe83fea1, "del_timer_sync" },
	{ 0xf397b9aa, "__tasklet_schedule" },
	{ 0xb4390f9a, "mcount" },
	{ 0x46085e4f, "add_timer" },
	{ 0x8bd5b603, "param_get_long" },
	{ 0x91009452, "schedule_delayed_work" },
	{ 0x4292364c, "schedule" },
	{ 0x61e85ad4, "create_proc_entry" },
	{ 0x642e54ac, "__wake_up" },
	{ 0x33d92f9a, "prepare_to_wait" },
	{ 0x9ccb2622, "finish_wait" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "65DC785EACEAD8C88C28BA6");
