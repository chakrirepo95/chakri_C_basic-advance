// 8) Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.

#include<stdio.h>
int main()
{
	int x,y,z,*a=&x,*b=&y,*c=&z,*d=0;
	printf("enter 3 values for x,y,z\n");
	scanf("%d%d%d",a,b,c);
	d=a;
	a=b;
	b=c;
	c=d;
	d=a;
	a=b;
	b=c;
	c=d;
	d=a;
	a=b;
	b=c;
	c=d;
	printf("%d is x\n%d is y\n%d is z\n",*a,*b,*c);
	return 0;
} 
