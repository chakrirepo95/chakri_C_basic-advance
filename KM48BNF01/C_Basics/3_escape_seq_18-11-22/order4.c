#include<stdio.h>
int main ()
{
        int x,a,b,c,d,e,f,y;
        scanf("%d",&x);
        a = x%10;
        b = x/10;
        c = b%10;
        d = b/10;
        e = d%10;
        f = d/10;
	y = a*1000+c*100+e*10+f;
        printf("%d",y);
        return(0);
}

