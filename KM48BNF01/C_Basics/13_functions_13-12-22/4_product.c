// 4) Write a function to return the product of two numbers without using * operator.

#include<stdio.h>
int product(int a,int b);
int main()
{
	int a,b,c;
	printf("enter two numbers : ");
	scanf("%d%d",&a,&b);
	c = product(a,b);
	printf("product of two number is %d ",c);
	return 0;
}
int product(int a,int b)
{
	int c=0,d=1;
	while(d<=b)
	{
		c=c+a;
		d++;
	}
	return c;
}



