#include<stdio.h>
int main()
{
	int n,x,i=2,c=0;
	scanf("%d%d",&n,&x);
	for(;n<=x;n++)
	{
		for(i=2,c=0;i<=n/2;i++)
		{
			if(n%i==0)
			{
				c++;
				break;
			}
		}
		if (c==0)
			printf("%d ",n);
	}
	printf("\n");
	return 0;
}


