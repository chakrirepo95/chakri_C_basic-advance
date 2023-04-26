/*4)  Write a program to read  n number of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically and read the data.)*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if !(defined n) // n = 5
#error macro is not define pls define the macro while gcc enter number strings n number.
#else
int main()
{
	char *str[n];
	int i,a;
	printf("enter string size\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		str[i]=(char *)malloc(a);
	}
	for(i=0;i<n;i++)
	{
		printf("enter string%d elments\n",i+1);
		scanf(" %49[^\n]s",str[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(a=0;a<n-i-1;a++)
		{
			if(strcmp(str[a],str[a+1])>0)
			{
				char *temp=(char *)malloc(50);
				strcpy(temp,str[a]);
				strcpy(str[a],str[a+1]);
				strcpy(str[a+1],temp);
//				free(temp);
			}
		}
		printf("smallest string %s\n",str[0]);
	}
	return 0;
}
#endif

