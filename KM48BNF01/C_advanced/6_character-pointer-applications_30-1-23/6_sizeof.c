// 6) define a sizeof macro ,that will find the size of a given variable as parameter, using pointers.

#include<stdio.h>
#define size(s) ((char *)(&s+1)-(char *)(&s))
int main()
{
	
	int x;
	long double y;
	long double *z=&y;
	printf("%lu\n",size(*z));
	return 0;
}

