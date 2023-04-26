//2 try input and output on different variables ,create variables and then formatted output and inputs, print some expressions with arithmetic operations.

#include<stdio.h>
int main ()
{
	int a,b,add,sub,mul;

	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	printf("addition of two numbers=%d",add);
        printf("subtraction of two numbers=%d",sub);
	printf("multiplication of two numbers=%d",mul);
	return 0;



}
