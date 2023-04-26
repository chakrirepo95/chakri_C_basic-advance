#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		j=n-i;
		while(j>0)
		{
			printf(" ");
			j--;
		}
		j=i;
		while(j>0)
		{
			printf("*");
			printf(" ");
			j--;
		}
		printf("\n");
		i++;
	}

 
	printf("print dowhile\n");
	i=1;
	do
	{
		j=n-i;
		do
		{
			if (j>0)
			printf(" ");
			j--;
		}
		while(j>0);
		j=i;
		do
		{
			printf("*");
			printf(" ");
			j--;
		}
		while(j>0);
		printf("\n");
		i++;
		}
	while(i<=n);

	printf("print for loop\n");
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>0;j--)
		{
			printf(" ");
		}
			for(j=i;j>0;j--)
			{
				printf("*");
				printf(" ");
			}
			printf("\n");
	}
	return 0;
}

		


