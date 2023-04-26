// 5) Write a program to read 4 numbers and print the biggest number.
#include<stdio.h>
int main()
{
	int  a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if ((a>b)&&(a>c)&&(a>d))
		printf("%dis big number",a);
	else if ((b>c)&&(b>d))
		printf("%dis big number",b);
	else if (c>d)
		printf("%d is big number",c);
	else 
		printf("%d is  big number",d);
	return 0;
}


