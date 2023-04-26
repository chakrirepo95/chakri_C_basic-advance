/* 3)using while ,do while and for loops :
* * * * *
   * * * *
      * * *
         * *
            * */


#include<stdio.h>
int main ()
{
	int i=1,n,j=1;
	scanf("%d",&n);
	do
	{
		int j=1;
		do
		{
			if(j>=i)
				printf("*");
			else
				printf(" ");
			j++;
		}
		while(j<=n);
		printf("\n");
		i++;
	}
	while(i<=n);
	return 0;
}


