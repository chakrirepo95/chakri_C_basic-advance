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
	do
	{
		int j=1;
		do
		{
			printf("*");
			j++;
		}
		while (j<=n);
		printf("\n");
		n--;
	}
	while (n>=0);
	return 0;
}
