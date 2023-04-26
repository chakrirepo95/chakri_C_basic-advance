#include<stdio.h>
int main ()
{
	int i,n,m,j=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(m=1;m<=i;j++,m++)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}
	return 0;
}
