#include<stdio.h>
int main ()
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
	a = x%10;
	b = x/10;
	c = b%10;
	d = b/10;
	e = d%10;
	f = d/10;
	printf("%d\n%d\n%d\n%d\n",a,c,e,f);
	return(0);
}

