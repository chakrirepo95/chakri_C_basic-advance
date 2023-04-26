// 1) Write a program to swap two numbers using Call by Value and Call by Reference.

#include<stdio.h>
void swap2(int *a,int*b);
void swap1(int a,int b);
int main()
{
	int a,b;
	printf("enter a,b values\n");
	scanf("%d%d",&a,&b);
	swap1(a,b);
	printf("swap 1: %d %d\n",a,b);
	swap2(&a,&b);
	printf("swap 2: %d %d",a,b);
	return 0;
} 

void swap1(int a,int b)
{
	int p;
	p=a;
	a=b;
	b=p;
	return ;
}

void swap2(int*a,int*b)
{
	int p;
	p=*a;
	*a=*b;
	*b=p;
	return ;
}
	
