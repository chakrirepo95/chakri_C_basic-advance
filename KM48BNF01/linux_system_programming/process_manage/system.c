//5. Write a program your own version of system() library?

#include"ck.h"

int ownsystem(const char *ck);
int main(int argc, char *argv[])
{
	int a;
	a=ownsystem(argv[1]);
	printf("command returned: %d\n",a);
	return 0;
}


int ownsystem(const char *ck)
{
	int sk;
	if(ck == NULL)
		return 1;
	pid_t cpid;
	cpid=fork();
	if(cpid == -1)
		return -1;
	if(cpid == 0)     
	{
		execl("/bin/sh","sh","-c",ck,NULL);
		_exit(127);
	}
	else  
	{
		wait(&sk);
		printf("iepoemdi\n");
		exit(0);
	}
}


