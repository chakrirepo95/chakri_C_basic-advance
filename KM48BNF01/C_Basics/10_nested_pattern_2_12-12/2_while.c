/* 2)using while ,do while and for loops :
* * * * *
* * * *
* * *
* *
**/


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while (n>=0)
	{
		int j=1;
		while (j<=n)
		{
			printf("*");
			j++;
		}
		printf("\n");
		n--;
	}
	return 0;
}
