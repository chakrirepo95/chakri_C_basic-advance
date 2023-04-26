/* 3) void strncat( char d[] , char s[],int n);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";

output: after concatenation d[] becomes " KernelMasters";  */

#include<stdio.h>
void strcat1(char drr[],char srr[],int n);
int main()
{
	int n;
	char srr[50];
	char drr[50];
	printf("enter a 1st character\n");
	scanf("%50[^\n]s",srr);
	printf("enter a 2nd character\n");
	scanf(" %50[^\n]s",drr);
	printf("enter a n value to add\n");
	scanf("%d",&n);
	strcat1(drr,srr,n);
	printf("%s\n",srr);
	return 0;
}


void strcat1(char drr[],char srr[],int n)
{
	int i=0,j;
	for(j=0;srr[j]!='\0';j++);
	for(i=0;i<n;i++,j++)
	{
		srr[j]=drr[i];
	}
	srr[j]='\0';
}

