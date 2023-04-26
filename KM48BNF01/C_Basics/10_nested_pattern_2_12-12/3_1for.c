3	using while ,do while and for loops :
* * * * *
   * * * *
      * * *
         * *
            *


#include<stdio.h>
int main()
{
	int i=1,j=1,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k>1;k--)
			printf(" ");
		for(j=n;j>=i;j--)
			printf("*");
				printf("\n");
	}
	return 0;
}

