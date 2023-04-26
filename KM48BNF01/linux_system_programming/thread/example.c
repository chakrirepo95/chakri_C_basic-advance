
#include"ck.h"

void *iphone(void *arg);
void *chakri(void *arg);

int fd;
pthread_t phone,rvp;	
void *thread_result;

char ak[5];

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
	int i=0;
	for(i=0;i<5;i++) 
	{
		printf("my name is thread one :%s\n",ak);
	}
	pthread_exit("exit");	
}
void *chakri(void *arg) 
{
	int i=0;
	for(i=0;i<5;i++) 
	{
		printf ("\t my name is tread two :%s\n",ak); 
	}
	pthread_exit("exit");	
}
