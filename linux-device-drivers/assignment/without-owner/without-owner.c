/* assignment/panic.c: This example creates a kernel panic. 

Whenever kernel goes to panic stage it creates a OOPS message which contains following data:
	BUG Summary:
	BUG: unable to handle kernel NULL pointer dereference at           (null)
	Which Function creates panic
	Which CPU runs incase of muticore processor
	Kernel Version
	Back Trace
	CPU Registers
	Board Information
	Application PID
	Application Name
	Module Name */

#include <linux/module.h> /* module_init(), module_exit() */
#include <linux/init.h> /* __init , __exit */
#include <linux/kernel.h> /* printk */
#include <linux/fs.h> /* struct file_operations, struct inode, struct file */
#include <linux/sched.h> /* struct task_struct - find user process name and pid*/

MODULE_AUTHOR("Kernel Masters");
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Character Device Driver Template");

int mychar_open (struct inode *, struct file *);
ssize_t mychar_read (struct file *, char __user *, size_t, loff_t *);
ssize_t mychar_write (struct file *, const char __user *, size_t, loff_t *);
int mychar_release (struct inode *, struct file *);

//int *ptr=NULL;

struct file_operations mychar_ops = 
{
	.open = mychar_open,
	.read = mychar_read,
	.write = mychar_write,
	.release = mychar_release,
};

int mychar_open (struct inode *ptr, struct file *ptr2)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	return 0;
}

ssize_t mychar_read (struct file *fptr, char __user *buff, size_t len, loff_t *pos)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	return 0;
}

ssize_t mychar_write (struct file *fptr, const char __user *buff, size_t len, loff_t *pos)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	return 0;
}

int mychar_release (struct inode *fptr, struct file *fptr2)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	return 0;
}

static int mychar_init(void)
{
	int result;
//	printk("ptr:%d\n",*ptr); // create a panic
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	result= register_chrdev(60,"mychar2",&mychar_ops);
	if (result < 0) 
	{
		printk("CDD Registratin FAIL\n");
		return -1;// module not loaded
	}
	return 0;
}

static void mychar_exit(void)
{
	printk("%s:%s:%d\n",__FILE__,__func__,__LINE__);
	printk("process name:%s, process ID:%d\n",current->comm,current->pid);
	unregister_chrdev(60,"mychar2");
}

module_init(mychar_init);
module_exit(mychar_exit);
