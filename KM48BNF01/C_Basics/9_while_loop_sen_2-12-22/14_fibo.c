#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,n,i=0;
	printf("enter the num \n");
	scanf("%d",&n);
	while (i<n)
	{
		a=b;
		b=c;
		c=a+b;
		printf(" %d ", c );

		i++;
	}	
		printf("\n");
	return 0;
}

