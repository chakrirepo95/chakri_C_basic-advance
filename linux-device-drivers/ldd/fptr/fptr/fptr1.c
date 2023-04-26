#include <stdio.h>

void my_fun1(int x)
{
	printf ("my_func1:x value:%d\n",x);
}
void my_fun2(int x)
{
	printf ("my_func2:x value:%d\n",x);
}

void (*fptr) (int); // function pointer declaration
int *ptr; // pointer dec

int main ()
{
int b=12;
ptr = &b; // pointer init
fptr = &my_fun1; //Function pointer Initalization

(*fptr)(4); // function pointer invoke

fptr = &my_fun2; //Function pointer Initalization
(*fptr)(6); // function pointer invoke


return 0;
}

