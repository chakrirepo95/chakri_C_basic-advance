/* 3) using while ,do while and for loops :
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
                for(j=1;j<=i;j++)
                {
			printf("*");
			if (j>i)
				break;
                     
                }
        printf("\n");
        }
        return 0;
}
                                                                                                                                             
 
