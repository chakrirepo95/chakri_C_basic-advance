#include <linux/kernel.h> /* printk */
#include <linux/module.h>/* This Header contains the necessary stuff for the Module */
#include <linux/init.h> /* Required header for the Intialization and Cleanup Functionalities....  */
#include <linux/fs.h> /* struct file_operations, struct file and struct inode */
#include <linux/kdev_t.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/interrupt.h>

struct tasklet_struct task;
int id;
int count;

extern int data_present;
extern wait_queue_head_t my_queue;

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

int init_module(void)
{
	int rv;
	task.func=&my_func;
	
	printk("simple modules loaded\n");
 	rv = request_irq(12, mouse_handler, IRQF_SHARED , "kernelmasters", &id); 
	if (rv )
	{
	 	printk ("<1>can't get interrupt 12\n");
	return -1;
	}
	return 0;
}

void cleanup_module(void)
{
	printk("simple module unloaded\n");
	free_irq(12, &id);   
}
MODULE_AUTHOR ("Kernel Masters");
MODULE_DESCRIPTION ("JOC: Android for Embedded Systems, KPHB, Hyderabad");
MODULE_LICENSE("GPL");

