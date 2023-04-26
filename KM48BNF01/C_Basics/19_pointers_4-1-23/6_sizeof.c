// 6) declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type?

#include<stdio.h>
int main()
{
	int *x=0;
	float *f=0;
	char *c=0;
	double *d=0;
	long double *l=0;
	printf(" size of int %lu\n size of float %lu\n size of char %lu\n size of double %lu\n size of long double %lu\n",sizeof(x),sizeof(f),sizeof(c),sizeof(d),sizeof(l));
	return 0;
} 
