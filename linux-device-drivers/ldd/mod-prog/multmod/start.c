#include <linux/module.h> /* module_init(), module_exit() */
#include <linux/init.h> /* __init , __exit */
#include <linux/kernel.h> /* printk */

MODULE_AUTHOR("Kernel Masters");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module program template/hello world module program/first device driver");


static int hello_init(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	return 0;
}


module_init(hello_init);
