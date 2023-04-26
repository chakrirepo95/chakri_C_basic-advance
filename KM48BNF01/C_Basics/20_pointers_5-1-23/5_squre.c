/* 5) "Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main." */


#include<stdio.h>
int * square();
int main()
{
	int i,ak[10]={1,2,3,4,5,0,6,7,8,9},*p=0;
	for(i=0;i<=10;i++)
	{
		p=square();
		*p=ak[i];
	}
	return 0;
} 
int * square()
{
	static int a;
	static int *b=&a;
	if(a!=0)
		printf(" square of %d is %d\n",a,a*a);
			return b;
}
