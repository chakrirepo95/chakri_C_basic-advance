#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	return 0;
}
