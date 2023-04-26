// 3) Write a program to read a number n and print the factorial of n.

#include<stdio.h>
int main()
{
	int i=1,n,sum=1;
	scanf("%d",&n);
	while(i<=n)
	{
			sum=sum*i;
		i++;
	}
	printf(" factorial of n %d\n",sum);
	return 0;
}

