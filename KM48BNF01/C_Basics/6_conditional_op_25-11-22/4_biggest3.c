// 4) Write a program to find the biggest of three numbers using conditional operator.
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a = (a>c)?a:c;
	b = (b>c)?b:c;
	c = (a>b)?a:b;
	printf("%d biggest number is",c);
	return 0;
}
