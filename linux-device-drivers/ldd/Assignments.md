1. Write a Null Device Driver module program and write an application program to test the null driver.

2. write a module program to create a kernel panic? What kind of information will be there in oops! message?

3. Do the below experiments and write down the conclusions.

    Experiment 1: Write a cdd template module with out using owner operation and write method should return 0.
    ```
    step1:write some data in to CDD template Driver. 
    $echo 1234 > /dev/mychar (Application should blocks).
    step2:Another terminal unload the module.
    $sudo rmmod char.ko (get kernel panic)
    step3:Collect the oops message.
    $ dmesg
    ```

    Experiment 2: Write a CDD template module using owner operation and write method should return 0?
    ```
    struct file_operations fops =
    {
            .owner   = THIS_MODULE,
    }
    step1:write some data in to CDD template Driver. 
    $echo 1234 > /dev/mychar (Application should blocks)
    step2:Another terminal unload the module.
    $sudo rmmod char.ko 
    ```

4. Write a layer1.c acts as consumer and layer2.c acts as producer programs and communicate between 2 source files using structures. 

5. What is portability? How Linux achieve portability feature, explain? 

6. How to identify your PC/Laptop mouse device major and minor numbers? Explain with step by step procedure?

7. Implement a linked list in the kernel and do the following operations.
   - Add entry to list
   - Add entry to tail of the list
   - Delete entry from list
   - Traversing the list
   - Delete the full list
   - Check if list is full 

8. Study the source code of linux and linux directory structure.

9. Observe the elf format in your module using objdump utility.

10. Explain significance of EXPORT_NO_SYMBOLS with the help of example

11. Write a module, which exports a function & a integer data type to be used by other modules.

12. Write a module which takes a integer & a string as an command line argument and use these arguments in your Driver

13. Write a module that spans over multiple files

14. Implement a Circular Buffer (using circular linked list) inside the kernel and write an application to test the buffer

15. Write a user space application to test the new system call. It should call the new system call, sleep a few seconds, call it again, and print the result. (implement this after watiching systemcall recorded video)


