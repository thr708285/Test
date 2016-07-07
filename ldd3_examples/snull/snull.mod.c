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
	{ 0xb279da12, "pv_lock_ops" },
	{ 0x6980fe91, "param_get_int" },
	{ 0x555df5a2, "napi_complete" },
	{ 0x973873ab, "_spin_lock" },
	{ 0x105e2727, "__tracepoint_kmalloc" },
	{ 0xff964b25, "param_set_int" },
	{ 0x712aa29b, "_spin_lock_irqsave" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf5dc66d9, "netif_rx" },
	{ 0xa13798f8, "printk_ratelimit" },
	{ 0x2a98d4f6, "dev_alloc_skb" },
	{ 0xb72397d5, "printk" },
	{ 0x55c6c99a, "free_netdev" },
	{ 0x8e3e4cfe, "register_netdev" },
	{ 0xb4390f9a, "mcount" },
	{ 0x53d13308, "netif_receive_skb" },
	{ 0xf6c2a5c8, "skb_push" },
	{ 0x4b07e779, "_spin_unlock_irqrestore" },
	{ 0xde4e44c2, "kmem_cache_alloc" },
	{ 0x607d56f, "__napi_schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x12c3f818, "alloc_netdev_mq" },
	{ 0x26f51f81, "eth_type_trans" },
	{ 0x8d9374ae, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e50f9cf, "unregister_netdev" },
	{ 0x260ca42c, "__netif_schedule" },
	{ 0x54eb6723, "consume_skb" },
	{ 0x9a05da01, "skb_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EA255E51139D3A070652005");
