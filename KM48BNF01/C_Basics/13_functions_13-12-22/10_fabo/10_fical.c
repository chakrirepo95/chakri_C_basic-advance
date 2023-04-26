// 10) Write a function to return the nth term of a fibonacci series. using this function print the fibonacci series upto n terms.

#include"ck.h"
void fabo(int n)
{
	int i=1,a=0,b=1,c=0;
	while(i<=n)
        {
                a=b;
                b=c;
                c=a+b;
                printf(" %d ", c );
                i++;
        }
	printf("\n");
	return ;
}

