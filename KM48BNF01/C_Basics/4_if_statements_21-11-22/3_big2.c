// 3) Write a program to read 2 numbers and print the biggest number.

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a>b)
		printf("%d is biggest number",a);
		else
			printf("%d is biggest number",b);
	return 0;
}

