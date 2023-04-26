#include<stdio.h>
int main()
{
	int a,b,x,y;
	scanf("%d%d",&a,&b);
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else 
			b=b-a;
	}
	printf("Hcf of %d and %d is %d\n",x,y,a);
	return 0;
}
