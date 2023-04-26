/*  Write 2 separate user-space applications, which will do the following :
    a. each application / process creates a shared-memory region  - 10 Marks
    b. create a thread, from each application / process           - 5 Marks
    c. create a shared-memory and use it, as user-space pipe IPC  - 10 Marks
    d. use thread semaphores and mutexes                          - 5 Marks
    e. one thread must be a producer and another must be a consumer
    f. you must load/run separate applications , from different terminals of Linux system  */


#include"ck.h"

void iphone(int sig);
int shmid=0,c=0;

char *shmad=0;
const char *ck="sema",*sk="vp";
sem_t *semad1=0,*semad2=0;
pthread_t thread1=0;
void *phone=0;
int main()
{
	shmid=shmget(3,100,0644 |IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmid failed");
		_exit(0);
	}
	shmad=shmat(shmid,NULL,0);
	c=pthread_create(&thread1,NULL,iphone,0);
	if(c==-1)
	{
		perror("thread failed");
		_exit(0);
	}
	c=pthread_join(thread1,&phone);
	if(c<0)
	{
		perror("join failed");
		_exit(0);
	}
	return 0;
}


void iphone(int sig)
{
	int i=0;
	printf("\n");
	for(i=0;i<10;i++) 
	{
		shmad[i]=i+48;
	}
	printf("ip: %s\n",shmad);
//	pthreadkill(pc,SIGUSR2);
}

