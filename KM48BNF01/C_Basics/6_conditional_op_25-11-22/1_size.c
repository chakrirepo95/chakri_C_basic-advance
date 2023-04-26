// 1) Write a program to print the size of various data types in C.
#include<stdio.h>
int main()
{
	int a;
	float f;
	char c;
	double d;
	long double ld;
	printf("%lu\n",sizeof a);
	printf("%lu\n",sizeof (unsigned int));
	printf("%lu\n%lu\n",sizeof (signed char),sizeof (unsigned char));
	printf("%lu\n%lu\n",sizeof (float),sizeof (double));
	printf("%lu\n",sizeof (long double));
	return 0;
}

