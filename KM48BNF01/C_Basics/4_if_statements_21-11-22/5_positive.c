// 5) Write a program to read a number and print the number as it is if it is positive or zero, convert it to positive and print, if the given number is negative.

#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=0)
		printf("%d print positive number",a);
	else
		printf("%d print positive number",a*(-1));
	return 0;
}

