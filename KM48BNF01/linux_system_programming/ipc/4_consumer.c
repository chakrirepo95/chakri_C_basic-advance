
#include"ck.h"
void ditatch(int sig);
void chakri();
int shmid;
sem_t *semad1,*semad2;
char *shmad=0;
const char *ck="semname",*vp="sk";

int main()
{
	(void) signal(SIGINT,ditatch);
	shmid=shmget(6,100,0);
//	printf("%d :shmid\n",shmid);
	if(shmid==-1)
	{
		perror("shmid failed");
		_exit(0);
	}
	semad1=sem_open(vp,O_CREAT,0644,1);
//	printf("%d\n",shmid);
//	getchar();
	semad2=sem_open(ck,0,1);
	getchar();
	shmad=shmat(shmid,NULL,0);
	if(shmad<0)
	{
		perror("shmad failed");
		_exit(0);
	}
	while(1)
	{
		sem_wait(semad1);
		chakri();
		sem_post(semad2);
	}
//	sem_close(semad2);
	return 0;
}


void chakri()
{
	int i=0;
	char ak[5]={0};
	for(i=0;i<5;i++)
	{
		ak[i]=shmad[i];
	}

	printf("==> CK <==: \b\v%s\n",ak);
	sleep(1);
}

void ditatch(int sig)
{
	shmdt(shmad);
	shmctl(shmid,IPC_RMID,0);
	sem_unlink(ck);
	(void) signal(SIGINT,SIG_DFL);
	kill(getpid(),SIGINT);
}


