 A Work Queue is a method used to allow a non blockable process like an interrupt service routine to trigger a deferred process that may include blocking functions.

There is a default work queue monitored by the kernel event deamon keventd. It is possible to create your own work queues.

Work queues are a different form of deferring work from what we have looked at so far. 
Work queues defer work into a kernel thread ­ this bottom half always runs in process 
context. Thus, code deferred to a work queue has all the usual benefits of process context. 
Most importantly, work queues are schedulable and can therefore sleep.

Normally, it is easy to decide between using work queues and softirqs/tasklets. If the 
deferred work needs to sleep, work queues are used. If the deferred work need not sleep, 
softirqs or tasklets are used. Indeed, the usual alternative to work queues is kernel 
threads. Because the kernel developers frown upon creating a new kernel thread (and, in 
some locales, it is a punishable offense), work queues are strongly preferred. They are 
really easy to use, too.

If you need a schedulable entity to perform your bottom­half processing, you need work 
queues. 
They are the only bottom­half mechanisms that run in process context, and thus, 
the only ones that can sleep. 
This means they are useful for situations where you need to  allocate a lot of memory, obtain a semaphore, or perform block I/O.
 
If you do not need a kernel thread to handle your deferred work, consider a tasklet instead.



