// 2) write a program to read a number n, and print sum of all the numbers from 1 to n.


#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the n range ");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d total sum \n",sum);
	return 0;
}


