#include <linux/module.h> /* module_init(), module_exit() */
#include <linux/init.h> /* __init , __exit */
#include <linux/kernel.h> /* printk */

MODULE_AUTHOR("Kernel Masters");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module program template/avg world module program/first device driver");

int add(int, int);

static int avg_init(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("avg result:%d\n",add(5,5)/2);
	return 0;
}

static void avg_exit(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
}

module_init(avg_init);
module_exit(avg_exit);
