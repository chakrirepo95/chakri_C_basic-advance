// 2) Find out the percentage of marks from 6 subjects(marks taken as integers) and print upto 2 digit precision.

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	float x;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	g = a+b+c+d+e+f;
	x = ((float)g/6);
	printf("%f percentage of marks",x);
	return 0;
}

