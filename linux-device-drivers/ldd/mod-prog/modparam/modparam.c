#include <linux/module.h> /* module_init(), module_exit() */
#include <linux/init.h> /* __init , __exit */
#include <linux/kernel.h> /* printk */
#include <linux/moduleparam.h> /* module_param */

MODULE_AUTHOR("Kernel Masters");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Module parameter example");

int  var=10;
module_param(var,int,0644); // create var parameter, type is int, no sysfs permissions

static int modparam_init(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("var:%d\n",var);
	return 0;
}

static void modparam_exit(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
}

module_init(modparam_init);
module_exit(modparam_exit);
