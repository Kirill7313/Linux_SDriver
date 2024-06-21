#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPLv3");
MODULE_AUTHOR("Kirill7313");
int in(void)
{
    printk(KERN_INFO "Hello, I'm Linux Driver!\n");
    return 0;
}
void ex(void)
{
    printk(KERN_INFO "Goodbye, Linux!\n");
}
module_init(in);
module_exit(ex);
