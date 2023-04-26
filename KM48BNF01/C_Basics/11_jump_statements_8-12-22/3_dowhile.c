/* 3) using while ,do while and for loops :
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
        do
        {
                int j=1;
                do
                {
                        printf("*");
                        j++;
			if (j>i)
				break;
                }
                while(j<=i);

                        printf("\n");
                        i++;
        }
                while(i<=n);
        return 0;
}


