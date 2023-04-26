/*  Write 2 separate user-space applications, which will do the following :
    a. each application / process creates a shared-memory region  - 10 Marks
    b. create a thread, from each application / process           - 5 Marks
    c. create a shared-memory and use it, as user-space pipe IPC  - 10 Marks
    d. use thread semaphores and mutexes                          - 5 Marks
    e. one thread must be a producer and another must be a consumer
    f. you must load/run separate applications , from different terminals of Linux system  */


#include"ck.h"

int shmid1=0,shmid2=0,c=0;

char *shmad1=0,*shmad2=0;
const char *ck="sema",*sk="vp";
sem_t *semad1=0,*semad2=0;
pthread_t thread2=0;
void *rvp=0;
int main()
{
	shmid1=shmget(3,100,0644 |IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmid1 failed");
		_exit(0);
	}
	shmid2=shmget(3,100,0);
	if(shmid==-1)
	{
		perror("shmid2 failed");
		_exit(0);
	}
	shmad1=shmat(shmid1,NULL,0);
	semad1=sem_open(vp,O_CREAT,0644,1);
	semad2=sem_open(ck,0,1);
	getchar();
	shmid2=shmat(shmid2,NULL,0);
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		printf("pthread_mutex_failed\n");
		return 1;
	}
	c=pthread_create(&thread2,NULL,chakri,0);
	if(c==-1)
	{
		perror("thread failed");
		_exit(0);
	}
	c=pthread_join(thread2,&rvp);
	if(c<0)
	{
		perror("join failed");
		_exit(0);
	}
	pthread_mutex_destroy(&lock);
	return 0;
}

void chakri(int sig)
{
	int i=0;
	char ck[10]={0}; 
	printf("\n");

	for(i=0;i<10;i++) 
	{

		sem_wait(semad1);
		pthread_mutex_lock(&lock);
		ck[i]=shmad1[i];
		sem_post(semad2);
	}		
	printf ("ck: %s\n",ck); 
	pthread_kill(getpid(),SIGUSR1);
}

