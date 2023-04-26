/* 9) Write a function to take a number and return the output of below series as output. Use factorial function (write your own) to calculate the factorial of the number in each term.

1 - 1/2! + 1/3! - 1/4! + 1/5! .... 1/n! */

#include"ck.h"
int main()
{
	int a;
	printf("enter the values ");
	scanf("%d",&a);
	printf("fact in each term %f\n",factorial(a));
	return 0;
}

