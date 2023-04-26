// 13) define a macro that generates a function that returns the sum of array elements, for different data typed arrays.


#include<stdio.h>
#define GEN(dt,p) dt rev_##dt(dt *ak,int n)\
{\
	int i;\
	dt a=0;\
	for(i=0;i<n;i++)\
	{\
	printf("enter a value\n");\
	scanf( #p,ak+i);\
	}\
	for(i--;i>=0;i--)\
	a=a+(*ak+i);\
	return a;\
	printf("\n");\
}
GEN(int,%d)
GEN(float,%f)
GEN(double,%lf)
int main()
{
	int n;
	printf("enter a array\n");
	scanf("%d",&n);
	int ak[n];
	float fk[n];
	double dk[n];
	printf(" sum of array %d\n",rev_int(ak,n));
	printf(" sum of array %f\n",rev_float(fk,n));
	printf(" sum of array %lf\n",rev_double(dk,n));
	return 0;

}

