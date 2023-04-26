

#include"ck.h"
void chakri(int sig);
int shmid=0, a=0;
char *shmad=0;

int main()
{	
	shmad=shmat(50,NULL,0);
	(void) signal(SIGUSR2,chakri);
	kill(getppid(),SIGUSR1);
	while(1)
	{

		pause();	
	}
}
	
void chakri(int sig)
{
		int i=0;
		char ck[10]={0};
		printf("\n");
		for(i=0;i<10;i++) 
		{
			ck[i]=shmad[i];
		}	
		printf ("==> CK <==:\b\v%s\n",ck);
		sleep(1);
		kill(getppid(),SIGUSR1);
}


