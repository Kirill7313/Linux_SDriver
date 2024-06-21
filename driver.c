#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
MODULE_LICENSE("GPLv3");
MODULE_AUTHOR("Kirill7313");
MODULE_DESCRIPTION("The simple GNU/Linux driver!");
static int __init in(void){
    pr_info("Hello, I'm Linux Driver!\n");
    return 0;
}
static void __exit ex(void){
    pr_info("Goodbye, Linux!\n");
}
module_init(in);
module_exit(ex);
