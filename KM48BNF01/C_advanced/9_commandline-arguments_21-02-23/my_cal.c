/* 1) Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727


note: when giving * in commandline, always give "*" */

#include<stdio.h>

int ckatoi(char *argv);
int main(int argc,char * argv[])
{
	int i=1,a=0,s=0,j=0;
	char c;
	if(argc < 4)
	{
		printf("command usage : ckcal <arg1> <operator> <arg2>\n");
		return 0;
	}
	for(i=1;argc>i;i++)
	{
		if(argv[i][j]=='+')
		{
			i++;
			a=ckatoi(argv[i]);
			s=s+a;
		}
		else if(argv[i][j]=='-' && argv[i][j+1]=='\0')
		{
			i++;
			a=ckatoi(argv[i]);
			s=s-a;
		}
		else if(argv[i][j]=='*')
		{
			i++;
			a=ckatoi(argv[i]);
			s=s*a;
		}
		else if(argv[i][j]=='/')
		{
			i++;
			a=ckatoi(argv[i]);
			s=s/a;
		}
		else if(argv[i][j]=='%')
		{
			i++;
			a=ckatoi(argv[i]);
			s=s%a;
		}
		else
		{
			a=ckatoi(argv[i]);
			s=s+a;
		}
	}
	printf("%d\n",s);
	return 0;
}

int ckatoi(char *argv)
{
	int a=0;
	char c=*argv;
	if(*argv=='-')
		argv=argv+1;
	while(*argv)
	{
		a=a*10;
		a=*argv-48+a;
		argv=argv+1;
	}
	if(c=='-')
		a=-a;
	return a;

}


