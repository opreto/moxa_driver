#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0x058c185a, "jiffies" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0xaef1f20d, "system_wq" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0xaa5a6835, "try_module_get" },
	{ 0x2247bd2b, "default_wake_function" },
	{ 0xc87f4bab, "add_wait_queue" },
	{ 0xd272d446, "schedule" },
	{ 0xc87f4bab, "remove_wait_queue" },
	{ 0x16544cc2, "tty_ldisc_ref" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0x0c6e2fe9, "tty_ldisc_deref" },
	{ 0x7851be11, "__get_user_4" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x30c6158f, "__tty_insert_flip_string_flags" },
	{ 0x7112416d, "tty_flip_buffer_push" },
	{ 0xca05f1cc, "do_SAK" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0x838f05bb, "__tty_alloc_driver" },
	{ 0xf4fa66aa, "tty_std_termios" },
	{ 0x27683a56, "memset" },
	{ 0xf2383677, "pci_get_device" },
	{ 0x2437d1be, "pci_enable_device" },
	{ 0xb0df611a, "tty_port_init" },
	{ 0xfbb53c22, "tty_port_link_device" },
	{ 0xdc131dc6, "tty_register_driver" },
	{ 0x0040afbe, "param_ops_int" },
	{ 0x0040afbe, "param_array_ops" },
	{ 0xd272d446, "__fentry__" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x16ab4215, "__wake_up" },
	{ 0xca05f1cc, "tty_wakeup" },
	{ 0xca05f1cc, "tty_hangup" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x0c161ddc, "capable" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x2044b429, "ioport_resource" },
	{ 0x52ebbba3, "__request_region" },
	{ 0x1c293109, "tty_unregister_driver" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0xf89e2eaa, "tty_unregister_device" },
	{ 0x9dd4105e, "free_irq" },
	{ 0x24db4285, "__release_region" },
	{ 0xe8213e80, "_printk" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0xbd03ed67, "USER_PTR_MAX" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0xd272d446, "__put_user_4" },
	{ 0xa53f4e29, "memcpy" },
	{ 0x6de2e3d6, "tty_hung_up_p" },
	{ 0xfb3c09a7, "module_put" },
	{ 0x34640664, "tty_wait_until_sent" },
	{ 0x7db11398, "tty_ldisc_flush" },
	{ 0xde4d0281, "__tracepoint_sched_set_state_tp" },
	{ 0x2719b9fa, "const_current_task" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x6ac784f4,
	0x058c185a,
	0xb2e62cba,
	0xaef1f20d,
	0x49733ad6,
	0xaa5a6835,
	0x2247bd2b,
	0xc87f4bab,
	0xd272d446,
	0xc87f4bab,
	0x16544cc2,
	0x5a844b26,
	0x0c6e2fe9,
	0x7851be11,
	0x82fd7238,
	0x30c6158f,
	0x7112416d,
	0xca05f1cc,
	0x5403c125,
	0x9126ce86,
	0xe54e0a6b,
	0x838f05bb,
	0xf4fa66aa,
	0x27683a56,
	0xf2383677,
	0x2437d1be,
	0xb0df611a,
	0xfbb53c22,
	0xdc131dc6,
	0x0040afbe,
	0x0040afbe,
	0xd272d446,
	0xd272d446,
	0x7ec472ba,
	0x81a1a811,
	0xe1e1f979,
	0xbd03ed67,
	0x90a48d82,
	0xd272d446,
	0x16ab4215,
	0xca05f1cc,
	0xca05f1cc,
	0x6bded543,
	0x02e1dca7,
	0x0c161ddc,
	0xde338d9a,
	0xde338d9a,
	0x2044b429,
	0x52ebbba3,
	0x1c293109,
	0xcb8b6ec6,
	0xf89e2eaa,
	0x9dd4105e,
	0x24db4285,
	0xe8213e80,
	0xe4de56b4,
	0xbd03ed67,
	0x092a35a2,
	0xd272d446,
	0xa53f4e29,
	0x6de2e3d6,
	0xfb3c09a7,
	0x34640664,
	0x7db11398,
	0xde4d0281,
	0x2719b9fa,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"schedule_timeout\0"
	"jiffies\0"
	"__trace_set_current_state\0"
	"system_wq\0"
	"queue_work_on\0"
	"try_module_get\0"
	"default_wake_function\0"
	"add_wait_queue\0"
	"schedule\0"
	"remove_wait_queue\0"
	"tty_ldisc_ref\0"
	"__x86_indirect_thunk_rdx\0"
	"tty_ldisc_deref\0"
	"__get_user_4\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__tty_insert_flip_string_flags\0"
	"tty_flip_buffer_push\0"
	"do_SAK\0"
	"__init_waitqueue_head\0"
	"request_threaded_irq\0"
	"__fortify_panic\0"
	"__tty_alloc_driver\0"
	"tty_std_termios\0"
	"memset\0"
	"pci_get_device\0"
	"pci_enable_device\0"
	"tty_port_init\0"
	"tty_port_link_device\0"
	"tty_register_driver\0"
	"param_ops_int\0"
	"param_array_ops\0"
	"__fentry__\0"
	"__x86_return_thunk\0"
	"__preempt_count\0"
	"_raw_spin_unlock_irqrestore\0"
	"_raw_spin_lock_irqsave\0"
	"__ref_stack_chk_guard\0"
	"__ubsan_handle_out_of_bounds\0"
	"__stack_chk_fail\0"
	"__wake_up\0"
	"tty_wakeup\0"
	"tty_hangup\0"
	"get_free_pages_noprof\0"
	"free_pages\0"
	"capable\0"
	"_raw_spin_lock\0"
	"_raw_spin_unlock\0"
	"ioport_resource\0"
	"__request_region\0"
	"tty_unregister_driver\0"
	"kfree\0"
	"tty_unregister_device\0"
	"free_irq\0"
	"__release_region\0"
	"_printk\0"
	"__ubsan_handle_load_invalid_value\0"
	"USER_PTR_MAX\0"
	"_copy_to_user\0"
	"__put_user_4\0"
	"memcpy\0"
	"tty_hung_up_p\0"
	"module_put\0"
	"tty_wait_until_sent\0"
	"tty_ldisc_flush\0"
	"__tracepoint_sched_set_state_tp\0"
	"const_current_task\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001141sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001181sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001142sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001120sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "39CB41A50CC04F57EAEBED0");
