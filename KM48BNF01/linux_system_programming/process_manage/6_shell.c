// 6. Write a program your own version of shell? 

#include"ck.h"
int main()
{
	int i=0,a;
	char ck[100]={0};
	while(1)
	{
		printf("$ ");
		scanf(" %[^\n]99s",ck);
		if(strcmp(ck,"exit")==0)
			break;
		char *argv=ck;	
		a=fork();
		if(a==0)
		{
			execl("/bin/sh","sh","-c",argv,NULL);
			exit(0);
		}
		if(a!=0)
		{
			wait(&i);
		}

	}
}






