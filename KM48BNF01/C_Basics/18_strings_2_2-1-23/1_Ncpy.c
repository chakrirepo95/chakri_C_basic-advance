/* 1) void strncpy ( char d[] . char s[],int n);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character} */

#include<stdio.h>
void strcpy1(char drr[],char srr[],int n);
int main()
{
	int i;
	char srr[50];
	char drr[50];
	int n;
	printf("enter a character\n");
	scanf("%50[^\n]s",srr);
	printf("enter a character\n");
	scanf(" %50[^\n]s",drr);
	printf("enter a n copy count\n");
	scanf("%d",&n);
	strcpy1(drr,srr,n);
	printf("%s\n",drr);
	return 0;
}

void strcpy1(char drr[],char srr[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		drr[i]=srr[i];
	}
}

