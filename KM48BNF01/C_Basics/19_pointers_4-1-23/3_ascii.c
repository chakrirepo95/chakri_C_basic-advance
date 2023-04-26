// 3) Write a program to take input for two character variables using pointers and find out which character has higher ascii value.

#include<stdio.h>
int main()
{
	char x=10,y=15;
	int v,s, *a=&v,*b=&s;
	x=v,y=s;
	if (a>b)
		printf("a is bigger then b");
	else 
		printf("b is bigger then a");
	return 0;
} 
