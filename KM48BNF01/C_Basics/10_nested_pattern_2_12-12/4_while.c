/* 4)using while ,do while and for loops :
            *
          * *
        * * *
      * * * *
    * * * * * */

#include<stdio.h>
int main()
{
	int n,i=1,j=1,m;
	scanf("%d",&n);
	m=n;
	printf("while loop\n");
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			if(j<m)
				printf(" ");
			else
				printf("*");
			j++;
		}
		m--;
		printf("\n");
		i++;
	}
	printf("for loop\n");
	m=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<m)
				printf(" ");
			else 
				printf("*");
		}
		m--;
		printf("\n");
	}
	printf("dowhile loop\n");
	m=n;
	i=1;
	do
	{
		int j=1;
		do
		{
			if (j<m)
				printf(" ");
			else
				printf("*");

			j++;
		}
		while(j<=n);
		m--;
		printf("\n");
		i++;
	}
	while(i<=n);
	return 0;
}





