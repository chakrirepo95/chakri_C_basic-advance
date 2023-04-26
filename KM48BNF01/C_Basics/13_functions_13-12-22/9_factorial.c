/* 9) Write a function to take a number and return the output of below series as output. Use factorial function (write your own) to calculate the factorial of the number in each term.

1 - 1/2! + 1/3! - 1/4! + 1/5! .... 1/n! */

#include<stdio.h>
float factorial(int a);
float fac(float i);
int main()
{
	int a;
	printf("enter the values ");
	scanf("%d",&a);
	printf("fact in each term %f\n",factorial(a));
	return 0;
}
float factorial(int a)
{
	int i;
	float s=0;
	for(i=1;i<=a;i++)
	{
		if (i==1)
			s=i;
		else 
			s = s+((float)1.0/(fac(i)));
	}
	return s;
}
float fac(float a)
{
	int s=1;
	for(;a>0;a--)
	{
		s=(-s)*a;
	}
	s=-s;
	return s;
}
