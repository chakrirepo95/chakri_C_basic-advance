/*2) Implement itoa function and return the string from the function. Print the result in main.
 * itoa function converts an integer into a string.
 * eg., input 123 , output : "123" (char pointer to "123")
 * declaration : char * itoa(int ))*/

#include<stdio.h>
#include<stdlib.h>
char * inst(int );
int main()
{
	char *ptr;
	int n;
	printf("enter a integer \n");
	scanf("%d",&n);
	ptr=inst(n);
	printf("string conversion %s\n",ptr);
	return 0;
}
char * inst(int i)
{
	int j=0,s=i;
	char *ptr;
	for(;i;j++)
	{
		i=i/10;
	}
	ptr=(char *)malloc(j);
	for(j--;s;j--)
	{
		ptr[j]=(s%10+48);
		s=s/10;
	}
	return ptr;
}

