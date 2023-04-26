// 3. How to start a new process in shell? Explain with example how ls command works?

/* #include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<sys/wait.h>*/ 

#include"ck.h"
int main()
{
	pid_t pid;
	int a,b;
	char *argv[]={"ls","-l"};
	pid = fork();
	if (pid == 0)
	{
		printf("children\n");
		a = execve("/bin/ls",argv,NULL);
		if(a == -1)
			perror("execve fails");
		exit(0);
	}
	else
	{
		printf("parent\n");
		wait(&b);
	}
}


