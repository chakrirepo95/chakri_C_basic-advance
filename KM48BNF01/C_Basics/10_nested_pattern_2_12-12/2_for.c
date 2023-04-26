/* 2)using while ,do while and for loops :
* * * * *
* * * *
* * *
* *
*  */


#include<stdio.h>
int main()
{
        int n,j=1;
        scanf("%d",&n); 
	for(   ; n>=0 ; n-- )
        {
                for( j=1 ; j<=n ; j++ )
                {
                        printf("*");
                }
                printf("\n");
        }
        return 0;
}




