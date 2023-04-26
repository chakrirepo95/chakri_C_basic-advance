#include"ck.h"
int pstar(int a,int b)
{
	int c,m=1;
	for(c=1;c<=b;c++)
	{
		m=mul(m,a);
	}
	return m;
}
int mul(int a,int b)
{
	int s=0,c=1;
	while(c<=b)
	{
		s=s+a;
		c++;
	}
	return s;
}

