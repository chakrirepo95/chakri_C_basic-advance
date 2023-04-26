#include"ck.h"
int product(int a,int b)
{
	int c=0,d=1;
	while(d<=b)
	{
		c=c+a;
		d++;
	}
	return c;
}


