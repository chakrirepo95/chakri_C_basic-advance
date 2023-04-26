#include<stdio.h>
int main()
{
	int a,b,x,y;
	scanf("%d%d",&a,&b);
	x=a; y=b;
	while(a!=b)
	{
		if(a<b)
			a=a+x;
		else 
			b=b+y;
	}
	printf("lcm of %d and %d is %d\n",x,y,a);
	return 0;
}

