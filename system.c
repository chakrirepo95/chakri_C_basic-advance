// write a program to create a your own system call

#include"ck.h"
int main()
{
	int i=0;
	char ck[100];
	pid_t cpid;
		scanf(" %[^\n]99s",ck);
		char *argv=ck;	
		cpid=fork();
		if(cpid==0)
		{
			execl("/bin/sh","sh","-c",argv,NULL);
			exit(0);
		}
		if(cpid!=0)
		{
			wait(&i);
		}

	return 0;
}
