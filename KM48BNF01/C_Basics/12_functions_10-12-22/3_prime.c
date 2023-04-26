/*  3) write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
return type is integer.
IsPrime - returns int (0,1) */

#include<stdio.h>
int prime(int a);
int main()
{
	int a,x;
	printf("enter a value");
	scanf("%d",&a);
	x= prime (a);
	if (x==0)
		printf("not a prime");
	else
		printf("it is a prime");
	return 0;
}
int prime(int a)
{
	int i;
	for (i=2;i<=(a/2);i++)
		if (a%i==0)
			return 0;
	return 1;
}
