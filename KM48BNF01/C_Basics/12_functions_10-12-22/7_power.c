// 7)Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.

#include<stdio.h>
int power(int a,int p);
int main()
{
	int a,b,n,p=1;
	printf("enter two values\n");
	scanf("%d%d",&a,&n);
		b=power(a,n);
	printf("%d",b);
	return 0;
}
int power(int a, int p)
{
	int i,n=1;
	for (i=1;i<=p;i++)
		n=n*a;
	return n;
}

