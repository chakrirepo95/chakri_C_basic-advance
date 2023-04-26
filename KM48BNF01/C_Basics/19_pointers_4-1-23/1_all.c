// 1) Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).

#include<stdio.h>
int main()
{
	int i=10,*x=&i;
	float f=20,*y=&f;
	char c=30, *z=&c;
	printf("address of i :%p address of x :%p\n value of i : %d indirected value of x: %d\n size of i: %lu size of x: %lu\n",&i,x,i,*x,sizeof(i),sizeof(*x));
	printf("address of f :%p address of y :%p\n value of f : %f indirected value of y: %f\n size of f: %lu size of y: %lu\n",&f,y,f,*y,sizeof(f),sizeof(*y));
	printf("address of c :%p address of z :%p\n value of c : %d indirected value of z: %d\n size of c: %lu size of z: %lu\n",&c,z,c,*z,sizeof(c),sizeof(*z));
	return 0;


} 
