// 12) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.



#include"ck.h"
int main()
{
        int a,b,n,p=1;
        printf("enter two values\n");
        scanf("%d%d",&a,&n);
                b=power(a,n);
        printf("%d",b);
        return 0;
}
       
