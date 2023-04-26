/* 2) void strcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).

Implementation:

void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
} */

#include<stdio.h>
void strcpy1(char drr[],char srr[]);
int main()
{
	int i;
	char srr[50];
	char drr[50];
	printf("enter a character\n");
	scanf("%50[^\n]s",srr);
	strcpy1(drr,srr);
	printf("%s\n",drr);
	return 0;
}

void strcpy1(char drr[],char srr[])
{
	int i=0;
	for(i=0;srr[i]!='\0';i++)
	{
		drr[i]=srr[i];
	}
	drr[i]='\0';
}

