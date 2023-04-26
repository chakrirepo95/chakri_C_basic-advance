

#include"ck.h"
int main()
{
	int i=0,a;
	char ck[100];
		scanf(" %[^\n]99s",ck);
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

	return 0;
}


