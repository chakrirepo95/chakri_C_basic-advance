#include"ck.h"

void ownsystem();
int main()
{
	ownsystem(); 
}

void ownsystem()
{

	int a=0,sk,i=0;
	char str[50];
	pid_t cpid;
	cpid=fork();
	if (cpid==0)
	{
		while (1)
		{	
			printf("$");
			a=execl("/bin/sh","sh",NULL);
			if (a==-1)
			{
				perror("execl fail");
				exit(0);
			}
		}
	}	
	else 
		wait(&sk);

}

