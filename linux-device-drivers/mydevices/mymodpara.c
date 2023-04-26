#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/moduleparam.h>

MODULE_AUTHOR("chakri");
MOUDLE_LICENSE("007");
MOUDLE_DISCRIPTION("module_param");

int var=10;
module_param(var,int,0644);

static int module_init(void)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("var:%d\n",var);
	return 0;
}
static void module_exit(void)
{
	printf("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
}
module_init(module_init);
module_exit(module_exit);



