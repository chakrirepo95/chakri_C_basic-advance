  1 irqreturn_t keyboard_handler(int irq, void *id)
/***************************************************************************
 *      Organisation    : Kernel Masters, KPHB, Hyderabad, India.          *
 *      facebook page   : www.facebook.com/kernelmasters                   *
 *                                                                         *
 *  Conducting Workshops on - Embedded Linux & Device Drivers Training.    *
 *  -------------------------------------------------------------------    *
 *  Tel : 91-9949062828, Email : kernelmasters@gmail.com                   *
 *  www.kernelmasters.org                                                  *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation. No warranty is attached; we cannot take *
 *   responsibility for errors or fitness for use.                         *
 ***************************************************************************/

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/io.h>


int id;
int count=0;

irqreturn_t keyboard_handler(int irq, void *id)
{
	//char ret;
	printk("inside the handler\n");
	//ret = inb(0x60);
        //printk("The ret is %d \n",ret);
        count++;
        printk("The count is %d \n",count);
        return IRQ_HANDLED;
}

int init_module(void)
{
	int rv;
	printk("simple modules loaded\n");
	rv = request_irq(1, keyboard_handler, IRQF_SHARED, "kernelmasters",&id); 
	printk("rv:%d  id:%d\n\n",rv,id);	
        if (rv < 0)
        {
                printk ("<1>can't get interrupt 51\n");
  1 irqreturn_t keyboard_handler(int irq, void *id)
       		return -1;
        }

        return 0;
}

void cleanup_module(void)
{
	printk("simple module unloaded\n");
	free_irq(1, &id);			
}
MODULE_AUTHOR ("Kernel Masters");
MODULE_DESCRIPTION ("JOC: Android for Embedded Systems, KPHB, Hyderabad");
MODULE_LICENSE("GPL");
  1 irqreturn_t keyboard_handler(int irq, void *id)

