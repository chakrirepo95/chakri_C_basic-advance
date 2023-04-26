// multiple two values without using *
#include<stdio.h>
int main ()
{
	int i=1,a,n,s=0;
	printf("enter the  values\n");
	scanf("%d%d",&n,&a);
	while (i<=n)
	{
		s=s+a;
		i++;
	}
	printf("%d",s);
	return 0;
}
