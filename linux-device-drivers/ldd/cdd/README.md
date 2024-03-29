
Character Device Drivers Framework:
----------------------------------

Charater Device File (Write followed by read not fetch data)
Regular File (Write followed by read than data available)

1. Application
     Based on the name of the device file  
2. Charater Device File (CDF)
     Based on the no.(major) of the device file
3. Charater Device Driver (CDD)
     Based on Data structures.
4. Low Level Interface Driver (Platform Driver/Bus Driver) 
     Based on communication protocols like UART, I2C, SPI, CAN, USB, etc ... 	
5. Charater Device (CD).


Major Number and Minor Numbers:
Major Number: Kernel uniquely identify each device by a number 
Minor Number: Minor number to distinguish b/w difference pieces of H/W.

2.4 kernel major (8 bit- 256), minor (8bit- 256)
2.6 kernel major (12 bit- 4K) ,minor (20 bit - 1M)

CDD Implementaion:
-----------------
Step 1: Character Device Driver Registration for major no (or) minor no.
-----
Ex: register_chrdev()

Step 2: Linking the Device File Operations to the device driver operations.
------

Step 3: Create a character device file using mknod.
------
Device Files are created by the mknod command:
----------------------------------------------
mknod <name_device>  <device_type> <major> <minor> [-m modes]

	Example:
	mknod /dev/MyCharDevice c 253 15 -m 0666 

Step 4: Write an application that initate operation of the driver. (Optional)
------


The below examples explain How to write a Character Device Driver.

CDD Basics Learning Sequence:
----------------------------
cdd/cdd-template/mychar.c: This example shows how to write a Character Device Driver
            Template. It is also called as NULL driver /dev/null.

cdd/panic/panic.c: This example creates a kernel panic. 

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
	Module Name

cdd/read-write/memory.c: This example explains how to implement memory driver as
            character device driver and how to transfer data in between
            user space and kernel space. read, write implementation

cdd/dynamic_cdd/CharDriver.c: This example explains how to write a dynamic character device driver.

cdd/multiple_cdd/CalculatorDriver.c: This example explains how to write a Multiple Character Device Driver.
