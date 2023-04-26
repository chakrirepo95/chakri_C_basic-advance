/* HELLO WORLD MODULE PROGRAMMING ~ FIRST DEVICE DRIVER ~ MODULE TEMPLATE */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>

MODULE_AUTHOR("CHAKRI");
MODULE_LICENSE("KM 48");
MODULE_DESCRIPTION("testing the code");

static int hello_init(void)
{
	printk("%s :%s :%d \n",__FILE__,__func__,__LINE__);
	return 0;
}
static void hello_exit(void)
{
	printk("%s :%s :%d \n",__FILE__,__func__,__LINE__);

}
module_init(hello_init);
module_exit(hello_exit);


