#include"ck.h"

void *iphone(void *arg);
void *chakri(void *arg);
void ip_sig(int sig);
void ck_sig(int sig);	
int fd;
pthread_t phone,rvp;	
void *thread_result;
char ak[10];

int main() 
{

	fd = pthread_create(&phone, NULL,iphone, NULL);
	if (fd != 0) 
	{
		perror("Thread creation failed");
		_exit(0);
	}
	fd = pthread_create(&rvp, NULL,chakri, NULL);
	if (fd != 0) 
	{
		perror("Thread creation failed");
		_exit(0);
	}

	fd = pthread_join(phone, &thread_result);
	if (fd != 0) 
	{
		perror("Thread join failed");
		_exit(0);
	}
	fd = pthread_join(rvp, &thread_result);
	if (fd != 0) 
	{
		perror("Thread join failed");
		_exit(0);
	}
	return 0;
}


void *iphone(void *arg)
{
		(void) signal(SIGUSR1,ip_sig);
		while(1) 
		{
			pause();
		}
		pthread_exit("hi");
}

void ip_sig(int sig)
{
	int i=0;	
		for(i=0;i<10;i++) 
		{
			ak[i]=i+48;
		}
		printf("ip:%s\n",ak);
		pthread_kill(rvp,SIGUSR2);
}

void *chakri(void *arg)
{

		(void) signal(SIGUSR2,ck_sig);
		pthread_kill(phone,SIGUSR1);
		while(1) 
		{
			pause();
		}
		pthread_exit("hi");
}

void ck_sig(int sig)
{
	int i = 0;
		for(i=0;i<10;i++) 
		{
			ak[i]=i+48;
		}		
		printf ("\t:ck:%s\n",ak); 
		sleep(1);
	pthread_kill(phone,SIGUSR1);
}
 








