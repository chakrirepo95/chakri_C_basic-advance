// 2) define a macro to generate a generic function that takes & prints an array in reverse order. Generate the functions for int, float, double data types.
 

#include<stdio.h>
#define GEN(dt,p) void reverse##dt(dt *ak,int n)\
{\
	int i;\
	for(i=0;i<n;i++)\
	{\
	printf("enter a value\n");\
	scanf( #p,ak+i);\
	}\
	for(i--;i>=0;i--)\
	printf(#p " " ,(*ak+i));\
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
	reverseint(ak,n);
	reversefloat(fk,n);
	reversedouble(dk,n);
	return 0;

}

