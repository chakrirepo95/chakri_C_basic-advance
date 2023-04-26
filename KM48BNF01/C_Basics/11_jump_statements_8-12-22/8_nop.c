
// 8) Write a program to read n positive integers from the user . IF the user enters a negative number, dont count it, and ask for one more positive  integer.

#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter number of counters");
	scanf("%d",&a);
	while(a>0)
	{
		printf("enter +ve number \n");
		scanf("%d",&b);
		if(b<0)
		{
			printf("please enter +ve int\n ");
			continue;
		}
		a--;
	}
	return 0;
}


