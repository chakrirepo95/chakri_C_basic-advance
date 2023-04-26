// 4) Write a program to read 3 numbers and print the biggest number.

#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
		if (a>c)
			printf("\n%d print big number",a);
		else
			printf("\n%d print big number",c);
	else if (b>c)
		printf("\n%d print big number",b);
	else 
		printf("\n%d print big number",c);
	return 0;
}

