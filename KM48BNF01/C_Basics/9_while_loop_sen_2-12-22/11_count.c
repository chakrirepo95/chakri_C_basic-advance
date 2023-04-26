// 11) count the number of digits in a given integer.

#include<stdio.h>
int main()
{
	int a,n,i=0;
	printf("enter the integer\n ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	printf("no of digits %d\n",i);
	return 0;
}

