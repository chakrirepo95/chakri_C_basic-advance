// 1) define a macro to generate swapping function for int, float , double and character datatypes, as a generic function using macros.


#include<stdio.h>
#define GEN(dt,d)  void  swap##dt(dt x,dt y)\
{\
	dt a;\
	a=x; x=y; y=a;\
	printf(#dt "\n" #d"  "#d "\n",x,y);\
}
	GEN(int,%d)
	GEN(float,%f)
	GEN(double,%lf)
	GEN(char,%c)
int main()
{
	int x=5,y=6;
	float f=5.6,e=6.5;
	double d=20,c=30;
	char a=97,b=65;
	swapint(x,y);
	swapfloat(f,e);
	swapdouble(d,c);
	swapchar(a,b);
	return 0;
} 
