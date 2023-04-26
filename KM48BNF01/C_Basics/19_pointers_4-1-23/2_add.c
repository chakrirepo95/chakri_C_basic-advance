// 2) Write a program to add two variables using thier pointers.


#include<stdio.h>
int main()
{
	int c,x=10,y=15,*a=&x,*b=&y;
	c= *a+*b;
	printf("c = %d",c);
} 
