// 7) Write a program to find the biggest of three numbers using pointers that point to those numbers.

#include<stdio.h>
int main()
{
	int x=15,y=20,z=10;
	int *a=&x,*b=&y,*c=&z;
	if(*a>*b)
	{
		if(*a>*c)
		{
			printf("x is the biggest  value  %d\n",*a);
		}
	}
	else if(*b>*c)
		printf("y is the biggest value %d\n",*b);
	else
		printf(" z is the biggest  value %d\n",*c);
	return 0;
}
 


