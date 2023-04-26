// 4) Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.

#include<stdio.h>
int main()
{
	int x=10,y=20,z=30;
	int *w=0;
	w=&x;
	printf("indirection value of x %d\n",*w);
	w=&y;
	printf("indirection value of y %d\n",*w);
	w=&z;
	printf("indirection value of z %d\n",*w);
	return 0;
} 
