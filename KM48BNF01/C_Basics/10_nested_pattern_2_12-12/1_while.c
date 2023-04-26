/* 1) using while ,do while and for loops :
*
* *
* * *
* * * *
* * * * * */

#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}




