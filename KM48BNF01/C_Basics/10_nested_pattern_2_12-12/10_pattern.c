#include<stdio.h>
int main ()
{
	int n,m,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n,m=i;m>0;m--,j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

