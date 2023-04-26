#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==i-1)
				printf("\\");
			else if(j==(n-i))
				printf("/");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n)
				printf("*");
			else if(i>1)
			{
				if(j==1||j==n)
					printf("*");
				else 
					printf(" ");
			}
		}
		printf("\n");
	}



	return 0;
}

