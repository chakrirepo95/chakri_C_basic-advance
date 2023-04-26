
#include "ck.h"
void producer();
void consumer();
const char * c="full";
sem_t * semad=NULL;
char *shad=NULL;
int main()
{
	int shid=0,forkid=0;
	sem_unlink(c);
	shid=shmget(123,10,0666| IPC_CREAT);
	if(shid<0)
	{
		perror("shmget:");
		exit(0);
	}
	shad=shmat(shid,NULL,0);
	if(shad==NULL)
	{
		perror("shmat:");
		exit(0);
	}
	/* semad=sem_open(c,O_CREAT,0666,1);
	   if(semad==NULL)
	   {
	   perror("sema open faild");
	   exit(0);
	   }*/
	forkid=fork();
	if(forkid<0)
	{
		perror("fork:");
		exit(0);
	}
	if(forkid>0)
	{
		while(1)
		{
			semad=sem_open(c,O_CREAT,0666,1);
			sem_wait(semad);
			producer();
			//	sem_post(semad);
			sem_post(semad);
			sem_close(semad);
		}
	}
	if(forkid==0)
	{
		while(1)
		{
			semad=sem_open(c,O_CREAT,0666,1);
			sem_wait(semad);
			consumer();
			sem_post(semad);
			sem_close(semad);
		}


	}
	return 0;
}
void producer()
{
	int a=0;
	for(a=0;a<9;a++)
	{
		shad[a]=a+48;
	}
	shad[a]=0;
	printf("==> producer <== \n   %s",shad);
	return ;
}
void consumer()
{
	int a;
	char loc[10]={0};
	for(a=0;a<10;a++)
	{
		loc[a]=shad[a];
	}
	printf("==> consumer <== \n   %s",loc);
	return ;
}



