#include<stdio.h>
int main()
{
	int i=1,j=1,n,z;
	scanf("%d",&n);
	z=n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",z);
		}
		printf("\n");
		z--;
	}
	return 0;
}

