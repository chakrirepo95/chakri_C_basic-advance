/*2) read an integer number, display the number as a number name expansion.
 * eg., 458 : four five eight*/
#include<stdio.h>
int main()
{
	char *str[9]={"one","two","three","four","five","six","seven","eight","nine"};
	char s1[50];
	printf("enter the numarical numers\n");
	int i=0,sum=0;
	scanf(" %s",s1);
	for(i=0;s1[i];i++)
	{
		sum=s1[i]-49;
		printf("%s ",str[sum]);
	}

}

