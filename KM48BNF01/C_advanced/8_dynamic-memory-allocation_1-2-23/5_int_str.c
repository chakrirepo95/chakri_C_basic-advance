/*5)  read a set of numbers from the user, and convert each integer to string using itoa function that you have written above, and print the numeric string in calling function in the same loop. */

#include<stdio.h>
#include<stdlib.h>
char * itoa(int);
int main()
{
	int i=0;
	printf("enter the count\n");
	scanf("%d",&i);
	int a[i],j;
	for(j=0;j<i;j++)
	{
		scanf("%d",&a[j]);
	}
	char *ptr;
	for(j=0;j<i;j++)
	{
		ptr=itoa(a[j]);
		printf("numaric %s\n",ptr);
		free(ptr);
	}
}
char * itoa(int i)
{
	int j=0,a=i;
	char  *ptr;
	for(;i;j++)
	{
		i=i/10;
	}
	ptr=(char *)malloc(j);
	for(j--;a;j--)
	{
		ptr[j]=(a%10+48);
		a=a/10;
	}

	return ptr;
}

