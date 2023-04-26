/* 1) using while ,do while and for loops :
*
* *
* * *
* * * *
* * * * * */



#include<stdio.h>
int main()
{
	int n,i=1,j=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
	}
	return 0;
}
