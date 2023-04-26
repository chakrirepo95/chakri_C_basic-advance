#include"ck.h"

MODULE_AUTHOR("chakri");
MODULE_LICENSE("GPL V2");
MODULE_DESCRIPTION("module programming template mychar device driver register in kernel");

int mychar_open(struct inode *, struct file *);
ssize_t mychar_read(struct file *, char __user *, size_t, loff_t *);
ssize_t mychar_write(struct file *, const char __user *, size_t, loff_t *);
int mychar_release(struct inode *, struct file *);


int mychar_open(struct inode *a, struct file *b)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	return 0;

}
ssize_t mychar_read(struct file *c, char __user *d, size_t e, loff_t *f)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	return 0;

}
ssize_t mychar_write(struct file *g, const char __user *h, size_t len, loff_t *i)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	return len;

}

int mychar_release(struct inode *k, struct file *j)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	return 0;

}

struct file_operations mychar_ops ={
	.open = mychar_open,
	.read = mychar_read,
	.write = mychar_write,
	.release = mychar_release,
};

static int mychar_init(void)
{
	int ret;
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	ret = register_chrdev(62,"mychar2",&mychar_ops);
	if(ret<0)
	{
		printk("CDD registration failed");
		return -1;
	}
	return 0;
}

static void mychar_exit(void)
{
	printk("%s: %s: %d:\n",__FILE__,__func__,__LINE__);
	printk("process name : %s process id : %d\n",current->comm,current->pid);
	unregister_chrdev(62,"mychar2");
}
module_init(mychar_init);
module_exit(mychar_exit);





