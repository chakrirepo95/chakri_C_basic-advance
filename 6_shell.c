
#include"ck.h"
int main()
{
	int i=0;
	char ck[100]={0};
	pid_t cpid;
	while(1)
	{
		printf("$ ");
		scanf(" %[^\n]99s",ck);
		if(strcmp(ck,"exit")==0)
			break;
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

	}
	return 0;
}






