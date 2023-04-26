/* Assignment 1:
Write a producer and consumer problem using fork() and shared memory. Synchronizing
producer and consumer process using POSIX signals. */

#include"ck.h"

void iphone(int sig);
void chakri(int sig);
int shmid,pc;
char *ak;
int main()
{
	shmid=shmget(6,300,0644 |IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmget");
		exit(1);
	}
	ak=shmat(shmid,NULL,0);
	pc = fork();
	if(pc<0)
	{
		perror("fork failed");
		_exit(0);
	}
	else if(pc)
	{
		(void) signal(SIGUSR1,iphone);
		while(1)
		{
			pause();
		}
	}
	else
	{
		(void) signal(SIGUSR2,chakri);
		kill(getppid(),SIGUSR1);
		while(1)
		{
			pause();
		}
	}

}

void iphone(int sig)
{
	int i=0;
	printf("\n");
	for(i=0;i<10;i++) 
	{
		ak[i]=i+48;
	}
	printf("ip: %s\n",ak);
	kill(pc,SIGUSR2);
}


void chakri(int sig)
{
	int i=0;
	char ck[10]={0};
	printf("\n");
	for(i=0;i<10;i++) 
	{
		ck[i]=ak[i];
	}		
	printf ("ck: %s\n",ck); 
	sleep(1);
	kill(getppid(),SIGUSR1);
}


