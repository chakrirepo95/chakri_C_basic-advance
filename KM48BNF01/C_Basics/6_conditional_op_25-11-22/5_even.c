// 5) Write a program that determines whether a given integer is odd or even and displays the appropriate message.

#include<stdio.h>
int main()
{
	int  a;
	scanf("%d",&a);
	(a%2==0)?printf("%d is a even",a):printf("%d is a odd",a);
	return 0;
}

