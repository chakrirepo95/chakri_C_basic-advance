#include"ck.h"
float factorial(int a)
{
	int i;
	float s=0;
	for(i=1;i<=a;i++)
	{
		if (i==1)
			s=i;
		else 
			s = s+((float)1.0/(fac(i)));
	}
	return s;
}
float fac(float a)
{
	int s=1;
	for(;a>0;a--)
	{
		s=(-s)*a;
	}
	s=-s;
	return s;
}
