/* Children is not same as parent [fork() + exec()]
Assignment 3:
Write a separate program for producer and consumer problem using fork(), exec() and
shared memory.
Synchronizing producer and consumer process using POSIX signals  */


#include"ck.h"

void iphone(int sig);
void chakri(int sig);

int shmid=0,a=0;
char *shmad=NULL;

int main()
{
	// (void) single(SIGINT,ditatch);
	shmid=shmget(3,10,0644 | IPC_CREAT);
//	printf("%d",shmid);
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
		(void) signal(SIGUSR1,iphone);
		while(1)
		{
			pause();
		}
	}
	else

	     //  execlp("sh","sh","-c","./chakri",0);
		execlp("./chakri","./chakri",NULL);
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
	printf("==> IP <==:\b\v%s\n",shmad);
	kill(a,SIGUSR2);
}


/* void ditatch(int sig)
{
	shmdt(shmad);
	shmctl(shmid,IPC_RMID,0);
	sem_unlink(ck);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);

}*/ 

