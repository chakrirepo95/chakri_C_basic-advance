/* Assignment 2:
Write a producer and consumer problem using fork() and shared memory.
Synchronizing producer and consumer process using named semaphores.*/

#include"ck.h"

void iphone();
void chakri();
int shmid=0,a=0;
sem_t *semadd=NULL;
char *shmad=NULL;
const char *ak="sk";
int main()
{
	sem_unlink(ak);
	shmid=shmget(123,10,0664 | IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmid failed");
		_exit(0);
	}
	shmad = shmat(shmid,NULL,0);
	a = fork();
	if(a==-1)
	{
		perror("fork failed");
		_exit(0);
	}
	else if(a)
	{
		while(1)
		{
			semadd=sem_open(ak,O_CREAT,0644,1);
			sem_wait(semadd);
			iphone();
			sem_post(semadd);
			sem_close(semadd);
		}
	}
	else
	{
		while(1)
		{
			semadd=sem_open(ak,O_CREAT,0644,1);
			sem_wait(semadd);
			chakri();
			sem_post(semadd);
			sem_close(semadd);
		}
	}
	return 0;
}


void iphone()
{
	int i=0;
	for(i=0;i<10;i++)
	{
		shmad[i]=i+48;
	}
	sleep(1);
	printf("==>iphone<==: \b\v%s\n",shmad);
}

void chakri()
{
	int i=0;
	char ak[10]={0};
	for(i=0;i<10;i++)
	{
		ak[i]=shmad[i];
	}
	sleep(1);
	printf("==>chakri<==: \b\v%s\n",ak);
}

