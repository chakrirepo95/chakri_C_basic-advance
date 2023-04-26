// 5) Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.

#include<stdio.h>
int main()
{
	int p=10,*x=&p,*y=&p,*z=&p;
	*x=p;
	printf(" %d is the value of p\n",*x);
	 p=20;
	*y=p;
	printf(" %d is the value of p\n",*y);
	 p=30;
	*z=p;
	printf(" %d is the value of p\n",*z);
	return 0;
} 
