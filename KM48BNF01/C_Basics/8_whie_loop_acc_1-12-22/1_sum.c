// 1) Write  a program to read n numbers from keyboard and find their sum.

#include<stdio.h>
int main()
{
	int i=1,n,sum=0,a;
	printf("enter the n range ");
	scanf("%d",&n);
	while (i<=n)
	{
		printf("enter the user numbers ");
		scanf("%d",&a);
		sum=sum+a;
		i++;
	}
	printf("%d",sum);
	return 0;
}


