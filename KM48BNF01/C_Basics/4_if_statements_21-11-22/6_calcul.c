/* 6) Write a calculator program that takes two integer numbers from user, and one of the operator symbols +,-,* and / as a character and prints the appropriate result using if else.  (print a+b if character entered is + etc)*/



#include<stdio.h>
int main()
{
	int a,b;
	char x;
	scanf("%d%c%d",&a,&x,&b);
	if (x=='+')
		printf("%d addtion of two numbers",a+b);
	else if (x=='-')
		printf("%d subtraction of two numbers",a-b);
	else if (x=='*')
		printf("%d multiplication of two numers",a*b);
	else 
		printf("%d division of two numbers",a/b);
	return 0;
}



