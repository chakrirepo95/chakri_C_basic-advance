// 3) Write a program to find the biggest of two numbers using conditional operator.
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a = (a>b)?a:b;
	printf("%d is biggest number",a);
	return 0;
}


