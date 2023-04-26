#include <linux/module.h> /* module_init(), module_exit() */
#include <linux/init.h> /* __init , __exit */
#include <linux/kernel.h> /* printk */

MODULE_AUTHOR("Kernel Masters");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module program template/add world module program/first device driver");

int var=28;

int add(int x, int y)
{
	return x+y;
}

EXPORT_SYMBOL(var);
EXPORT_SYMBOL(add);

static int add_init(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("add result:%d\n",add(4,5));
	return 0;
}

static void add_exit(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
}

module_init(add_init);
module_exit(add_exit);
