#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("hbw");
MODULE_DESCRIPTION("A simple test for kernel  module write.");
MODULE_VERSION("0.1");

static int __init kmw_test_init(void) {
 printk(KERN_INFO "Hello, my module!\n");
 return 0;
}
static void __exit kmw_test_exit(void) {
 printk(KERN_INFO "Goodbye, my module!\n");
}
module_init(kmw_test_init);
module_exit(kmw_test_exit);

