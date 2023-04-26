#include<stdio.h>
int main ()
{
        int x,a,b,c,d,e,f,g,h,i,j;
        scanf("%d",&x);
        a = x/2000;  b = x%2000;
        c = b/500;   d = b%500;
        e = d/200;   f = d%200;
	g = f/100;   h = f%100;
	i = h/50;    j = h%50;
        printf("no.of 2000/-notes\t%d\n",a);
        printf("no.of 500/-notes\t%d\n",c);
	printf("no.of 200/-notes\t%d\n",e);
	printf("no.of 100/-notes\t%d\n",g);
	printf("no.of 50/-notes\t%d\n",i);

         return(0);
}


