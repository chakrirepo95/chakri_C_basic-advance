#include <linux/kernel.h> /* printk */
#include <linux/module.h>/* This Header contains the necessary stuff for the Module */
#include <linux/init.h> /* Required header for the Intialization and Cleanup Functionalities....  */
#include <linux/fs.h> /* struct file_operations, struct file and struct inode */
#include <linux/kdev_t.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/interrupt.h>

#define NAME "Mymouse"
//#define MAJOR 60

struct tasklet_struct task;
int id;
int count;

int data_present=0;
wait_queue_head_t my_queue;
DECLARE_WAIT_QUEUE_HEAD(my_queue);

dev_t temp;
ssize_t mouse_read(struct file *, char __user *, size_t, loff_t *);
ssize_t mouse_write(struct file *, const char __user *, size_t, loff_t *);
int mouse_open(struct inode *, struct file *);
int mouse_close(struct inode *, struct file *);

struct file_operations fops = {
	.owner = THIS_MODULE,
	.read = mouse_read,
	.write = mouse_write,
	.open = mouse_open,
	.release = mouse_close
};

void my_func(unsigned long);
void my_func(unsigned long data)
{
	printk("tasklet is scheduled\n");
}

irqreturn_t mouse_handler(int irq, void *id)
{

      printk("inside the handler\n");
       count++;
       data_present=1;
       wake_up(&my_queue);
       printk("ISR calling %d \n",count);
       tasklet_schedule(&task);
       printk("Tasklet calling %d \n",count);
	return IRQ_HANDLED;
}


/*Device methods */
ssize_t mouse_read(struct file *filp, char __user *usr, size_t size, loff_t *off)
{
	printk("Reading from device\n");
	if(data_present == 0)
	{
		printk("Process %d (%s) Going to Sleep\n",current->pid,current->comm);
		// Data is not available
		//wait_event(my_queue,(data_present==1)); // uninterruptible sleep
		//printk(KERN_INFO "Process awaken - Now Data is available\n");
		
		if(wait_event_interruptible(my_queue,(data_present==1)))
		{
		// error
		printk(KERN_ERR "Signal Occurs\n");
		}
		else
		{
		//success
		printk(KERN_INFO "Process awaken - Now Data is available\n");
		}
	}
	else
	{
	printk(KERN_INFO "Data is available\n");
	}
	return 0; //-EPERM;
}

ssize_t mouse_write(struct file *filp, const char __user *usr, size_t len, loff_t *off)
{
	printk("Process %d (%s) Going to Sleep\n",current->pid,current->comm);
	printk("Trying to write into the device\n");	
	data_present=1;
	wake_up(&my_queue);
	return len; // -EPERM;
} 

int mouse_open(struct inode *ino, struct file *filp)
{
	printk("device opened\n");
	return 0;
}

int mouse_close(struct inode *ino, struct file *filp)
{
	printk("device closed\n");
	return 0;
}

int mouse_init(void)
{
	int result,rv;
        result = register_chrdev(60, NAME, &fops);
	if(result < 0)
	{
		printk("Device could not be registered\n");
		return -EPERM;
	}
	printk("Driver registered with major %d\n", MAJOR(temp));
	printk("result %d\n",result);
	task.func=&my_func;
	printk("simple modules loaded\n");
 	rv = request_irq(12, mouse_handler, IRQF_SHARED , "my_mouse", &id); 
	return 0;

}


void mouse_exit(void)
{
	unregister_chrdev(60, NAME);
	printk("simple_mouse unregistered\n");
	printk("simple module unloaded\n");
	free_irq(12, &id);   
}

module_init(mouse_init);
module_exit(mouse_exit);

MODULE_LICENSE("GPL");
