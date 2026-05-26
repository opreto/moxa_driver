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
	{ 0x9dd4105e, "free_irq" },
	{ 0xaa5a6835, "try_module_get" },
	{ 0x092a35a2, "_copy_from_user" },
	{ 0x2437d1be, "pci_enable_device" },
	{ 0xca05f1cc, "tty_wakeup" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x7112416d, "tty_flip_buffer_push" },
	{ 0xf2383677, "pci_get_device" },
	{ 0x12ad300e, "iounmap" },
	{ 0xa53f4e29, "memcpy" },
	{ 0xc87f4bab, "add_wait_queue" },
	{ 0x838f05bb, "__tty_alloc_driver" },
	{ 0x16ab4215, "__wake_up" },
	{ 0x02e1dca7, "free_pages" },
	{ 0x0040afbe, "param_ops_byte" },
	{ 0xca05f1cc, "tty_hangup" },
	{ 0x1c293109, "tty_unregister_driver" },
	{ 0xe1e1f979, "_raw_spin_lock_irqsave" },
	{ 0xde338d9a, "_raw_spin_lock" },
	{ 0x24db4285, "__release_region" },
	{ 0xd272d446, "__fentry__" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0x7851be11, "__get_user_8" },
	{ 0x01da6614, "iowrite8" },
	{ 0x6ac784f4, "schedule_timeout" },
	{ 0xd272d446, "schedule" },
	{ 0xde4d0281, "__tracepoint_sched_set_state_tp" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x34640664, "tty_wait_until_sent" },
	{ 0xd272d446, "__put_user_4" },
	{ 0x5a844b26, "__x86_indirect_thunk_rdx" },
	{ 0xf4fa66aa, "tty_std_termios" },
	{ 0xf89e2eaa, "tty_unregister_device" },
	{ 0x0c161ddc, "capable" },
	{ 0xfb3c09a7, "module_put" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x9126ce86, "request_threaded_irq" },
	{ 0x16544cc2, "tty_ldisc_ref" },
	{ 0x30c6158f, "__tty_insert_flip_string_flags" },
	{ 0xb0df611a, "tty_port_destroy" },
	{ 0xb0df611a, "tty_port_init" },
	{ 0x405cdbdf, "pci_read_config_word" },
	{ 0x2719b9fa, "const_current_task" },
	{ 0x292e279d, "tty_port_register_device" },
	{ 0x97dd6ca9, "ioremap" },
	{ 0x7db11398, "tty_ldisc_flush" },
	{ 0x0c6e2fe9, "tty_ldisc_deref" },
	{ 0xe54e0a6b, "__fortify_panic" },
	{ 0xca05f1cc, "do_SAK" },
	{ 0x81a1a811, "_raw_spin_unlock_irqrestore" },
	{ 0x7e2232fb, "ioread8" },
	{ 0x2044b429, "ioport_resource" },
	{ 0x27683a56, "memset" },
	{ 0xd272d446, "__put_user_8" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x2247bd2b, "default_wake_function" },
	{ 0x092a35a2, "_copy_to_user" },
	{ 0x5403c125, "__init_waitqueue_head" },
	{ 0xbd03ed67, "USER_PTR_MAX" },
	{ 0x058c185a, "jiffies" },
	{ 0x82fd7238, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7ec472ba, "__preempt_count" },
	{ 0xa4929c96, "tty_buffer_request_room" },
	{ 0xdc131dc6, "tty_register_driver" },
	{ 0xcbae5412, "__const_udelay" },
	{ 0x7851be11, "__get_user_4" },
	{ 0x6de2e3d6, "tty_hung_up_p" },
	{ 0xc87f4bab, "remove_wait_queue" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x2044b429, "iomem_resource" },
	{ 0x0040afbe, "param_ops_int" },
	{ 0xf12c14fc, "pci_write_config_word" },
	{ 0xde338d9a, "_raw_spin_unlock" },
	{ 0x6bded543, "get_free_pages_noprof" },
	{ 0x1c293109, "tty_driver_kref_put" },
	{ 0xb2e62cba, "__trace_set_current_state" },
	{ 0x52ebbba3, "__request_region" },
	{ 0xaef1f20d, "system_wq" },
	{ 0xbebe66ff, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x9dd4105e,
	0xaa5a6835,
	0x092a35a2,
	0x2437d1be,
	0xca05f1cc,
	0x49733ad6,
	0x7112416d,
	0xf2383677,
	0x12ad300e,
	0xa53f4e29,
	0xc87f4bab,
	0x838f05bb,
	0x16ab4215,
	0x02e1dca7,
	0x0040afbe,
	0xca05f1cc,
	0x1c293109,
	0xe1e1f979,
	0xde338d9a,
	0x24db4285,
	0xd272d446,
	0xe8213e80,
	0xbd03ed67,
	0x7851be11,
	0x01da6614,
	0x6ac784f4,
	0xd272d446,
	0xde4d0281,
	0xd272d446,
	0x34640664,
	0xd272d446,
	0x5a844b26,
	0xf4fa66aa,
	0xf89e2eaa,
	0x0c161ddc,
	0xfb3c09a7,
	0x90a48d82,
	0x9126ce86,
	0x16544cc2,
	0x30c6158f,
	0xb0df611a,
	0xb0df611a,
	0x405cdbdf,
	0x2719b9fa,
	0x292e279d,
	0x97dd6ca9,
	0x7db11398,
	0x0c6e2fe9,
	0xe54e0a6b,
	0xca05f1cc,
	0x81a1a811,
	0x7e2232fb,
	0x2044b429,
	0x27683a56,
	0xd272d446,
	0xd272d446,
	0x2247bd2b,
	0x092a35a2,
	0x5403c125,
	0xbd03ed67,
	0x058c185a,
	0x82fd7238,
	0x7ec472ba,
	0xa4929c96,
	0xdc131dc6,
	0xcbae5412,
	0x7851be11,
	0x6de2e3d6,
	0xc87f4bab,
	0xe4de56b4,
	0x2044b429,
	0x0040afbe,
	0xf12c14fc,
	0xde338d9a,
	0x6bded543,
	0x1c293109,
	0xb2e62cba,
	0x52ebbba3,
	0xaef1f20d,
	0xbebe66ff,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"free_irq\0"
	"try_module_get\0"
	"_copy_from_user\0"
	"pci_enable_device\0"
	"tty_wakeup\0"
	"queue_work_on\0"
	"tty_flip_buffer_push\0"
	"pci_get_device\0"
	"iounmap\0"
	"memcpy\0"
	"add_wait_queue\0"
	"__tty_alloc_driver\0"
	"__wake_up\0"
	"free_pages\0"
	"param_ops_byte\0"
	"tty_hangup\0"
	"tty_unregister_driver\0"
	"_raw_spin_lock_irqsave\0"
	"_raw_spin_lock\0"
	"__release_region\0"
	"__fentry__\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"__get_user_8\0"
	"iowrite8\0"
	"schedule_timeout\0"
	"schedule\0"
	"__tracepoint_sched_set_state_tp\0"
	"__stack_chk_fail\0"
	"tty_wait_until_sent\0"
	"__put_user_4\0"
	"__x86_indirect_thunk_rdx\0"
	"tty_std_termios\0"
	"tty_unregister_device\0"
	"capable\0"
	"module_put\0"
	"__ubsan_handle_out_of_bounds\0"
	"request_threaded_irq\0"
	"tty_ldisc_ref\0"
	"__tty_insert_flip_string_flags\0"
	"tty_port_destroy\0"
	"tty_port_init\0"
	"pci_read_config_word\0"
	"const_current_task\0"
	"tty_port_register_device\0"
	"ioremap\0"
	"tty_ldisc_flush\0"
	"tty_ldisc_deref\0"
	"__fortify_panic\0"
	"do_SAK\0"
	"_raw_spin_unlock_irqrestore\0"
	"ioread8\0"
	"ioport_resource\0"
	"memset\0"
	"__put_user_8\0"
	"__x86_return_thunk\0"
	"default_wake_function\0"
	"_copy_to_user\0"
	"__init_waitqueue_head\0"
	"USER_PTR_MAX\0"
	"jiffies\0"
	"__ubsan_handle_shift_out_of_bounds\0"
	"__preempt_count\0"
	"tty_buffer_request_room\0"
	"tty_register_driver\0"
	"__const_udelay\0"
	"__get_user_4\0"
	"tty_hung_up_p\0"
	"remove_wait_queue\0"
	"__ubsan_handle_load_invalid_value\0"
	"iomem_resource\0"
	"param_ops_int\0"
	"pci_write_config_word\0"
	"_raw_spin_unlock\0"
	"get_free_pages_noprof\0"
	"tty_driver_kref_put\0"
	"__trace_set_current_state\0"
	"__request_region\0"
	"system_wq\0"
	"module_layout\0"
;

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001393d00001024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001182sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001183sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001160sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001323sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001393d00001145sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C2D98280CDFDA2F394124A8");
