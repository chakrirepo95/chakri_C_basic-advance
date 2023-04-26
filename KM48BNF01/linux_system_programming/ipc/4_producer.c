/* Unrelated Process Communication [Without fork() & exec()]
Assignment 4: Write a separate program for producer.c and consumer.c using
Shared Memory, named semaphores without using fork() and exec() system calls */


#include"ck.h"

void iphone();
void ditatch(int sig);
int shmid;
sem_t *semad1,*semad2;
char *shmad=0;
const char *ck="semname",*vp="sk";
int main()
{
	(void) signal(SIGINT,ditatch);
	shmid=shmget(6,100,0644 |IPC_CREAT);
//	printf("%d--shmid\n",shmid);
	if(shmid==-1)
	{
		perror("shmid failed");
		_exit(0);
	}

	semad1=sem_open(ck,O_CREAT,0644,1);
//	printf("%d\n",shmid);
//	getchar();
	semad2=sem_open(vp,0,1);
	getchar();
	shmad=shmat(shmid,NULL,0);
//	printf("%s--shmad",shmad);
	while(1)
	{

	      	sem_wait(semad1);
		iphone();
		sem_post(semad2);
	}
//	sem_close(semad1);
	return 0;
}

void iphone()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		shmad[i]=i+48;
	}
	sleep(1);
	printf("==> IP <==: \b\v%s\n",shmad);
}

void ditatch(int sig)
{
	shmdt(shmad);
	shmctl(shmid,IPC_RMID,0);
	sem_unlink(ck);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);

}




