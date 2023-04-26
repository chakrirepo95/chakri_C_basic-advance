#include"ck.h"

void ditatch(int sig);
void *iphone();
int shmid1=0,shmid2,c=0;
char *shmad1=0,*shmad2=0;
const char *ck="sema",*sk="vp";
sem_t *semad1=0,*semad2=0;
pthread_t thread1=0;
pthread_mutex_t lock;
void *phone=0;
int main()
{
	(void) signal(SIGINT,ditatch);
	shmid1=shmget(3,100,0644 |IPC_CREAT);
	if(shmid1==-1)
	{
		perror("shmid failed");
		_exit(0);
	}
//	getchar();
	shmid2=shmget(3,100,0);
	if(shmid2==-1)
	{
		perror("shmid failed");
		_exit(0);
	}
//	getchar();
	shmad1=shmat(shmid1,NULL,0);
	semad1=sem_open(ck,O_CREAT,0644,1);
//	getchar();
	semad2=sem_open(sk,0,1);
	getchar();
	shmad2=shmat(shmid2,NULL,0);
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		printf("mutex_init_failed\n");
		return 1;
	}
	c = pthread_create(&thread1,NULL,iphone,0);
	if(c==-1)
	{
		perror("thread failed");
		_exit(0);
	}
	c=pthread_join(thread1,&phone);
	if(c==-1)
	{
		perror("join failed");
		_exit(0);
	}
	pthread_mutex_destroy(&lock);
	return 0;
}

void *iphone(int sig)
{
	int i=0;
	printf("\n");
	for(i=0;i<10;i++) 
	{
		shmad1[i]=i+48;
	}
	printf("ip: %s\n",shmad1);
	pthread_kill(getpid(),SIGUSR2);
}

void ditatch(int sig)
{
	shmdt(shmad1);
	shmdt(shmad2);
	shmctl(shmid1,IPC_RMID,0);
	shmctl(shmid2,IPC_RMID,0);
	sem_unlink(ck);
	sem_unlink(sk);
	(void) signal(SIGINT,SIG_DFL);
	pthread_kill(getpid(),SIGINT);
}







