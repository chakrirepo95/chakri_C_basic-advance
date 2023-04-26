#include<stdio.h>
int main ()
{
        int x,a,b,c,d,b1,c1;
        scanf("%d",&x);
        a = x/1000;
        b = x/100;
        b1 = b%10;
        c = x/10;
        c1 = c%10;
        d = x%10;
        printf("%d\n%d\n%d\n%d\n",a,b1,c1,d);
        return(0);
}                         
