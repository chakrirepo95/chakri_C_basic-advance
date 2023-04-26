/* 3) void strcat( char d[] , char s[]);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";  */

#include<stdio.h>
void strcat1(char drr[],char srr[]);
int main()
{
	char srr[50];
	char drr[50];
	printf("enter a 1st character\n");
	scanf("%50[^\n]s",drr);
	printf("enter a 2nd character\n");
	scanf(" %50[^\n]s",srr);
	strcat1(drr,srr);
	printf("%s\n",drr);
	return 0;
}


void strcat1(char drr[],char srr[])
{
	int i=0,j;
	for(i=0;drr[i]!='\0';i++);
	for(j=0;srr[j]!='\0';i++,j++)
	{
		drr[i]=srr[j];
	}
	drr[i]='\0';
}

