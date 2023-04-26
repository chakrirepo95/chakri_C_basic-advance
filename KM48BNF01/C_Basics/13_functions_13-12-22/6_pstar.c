// 6) Write a power function ,that takes 2 numbers as input, and calculates power without using * operator.

#include<stdio.h>
int pstar(int a,int b);
int mul(int a,int b);
int main()
{
	int a,b,c;
	printf("enter two number ");
	scanf("%d%d",&a,&b);
	c = pstar(a,b);
	printf(" power of two num :%d\n",c);
	return 0;
}
int pstar(int a,int b)
{
	int c,m=1;
	for(c=1;c<=b;c++)
	{
		m=mul(m,a);
	}
	return m;
}
int mul(int a,int b)
{
	int s=0,c=1;
	while(c<=b)
	{
		s=s+a;
		c++;
	}
	return s;
}

