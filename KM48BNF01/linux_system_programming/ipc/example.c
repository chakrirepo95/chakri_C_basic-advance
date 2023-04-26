
#include"ck.h"

void iphone(int sig);
void chakri(int sig);
int shmid,pc;
char *ak;
int main()
{
	printf("hello\n");
	shmid=shmget(10,1024,0644 |IPC_CREAT);
	if(shmid==-1)
	{
		perror("shmget");
		exit(1);
	}
	ak=shmat(shmid,0,0);
	pc = fork();
	if(pc<0)
	{
		perror("fork failed");
		_exit(0);
	}
	if(pc==0)
	{
		(void)signal(SIGUSR1,iphone);
		while(1)
		{
			pause();
		}
	}
	if(pc>0)
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
	for(i=0;i<10;i++) 
	{
		ak[i]=i+48;
	}
	printf("ip:%s\n",ak);
	kill(pc,SIGUSR2);
}


void chakri(int sig)
{
	int i=0;
	char ck[10]={0};
	for(i=0;i<10;i++) 
	{
		ck[i]=ak[i];
	}		
	printf ("\t:ck:%s\n",ck); 
	sleep(1);
	kill(getppid(),SIGUSR1);
}


