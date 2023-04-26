/* 4) read a 4 digit number and print it in the following formats using arithmetic operators / and %. write 5 different programs, one for each output:

eg., 4532

OP1:  

2                   
3 
5
4


OP2:
4
5
3
2



OP3:
4
45
453
4532

OP4:
4532
453
45
4

OP5:
2354*/


#include<stdio.h>
int main ()
{
        int x,a,b,c,d,e,f,b1,a1,y;
        scanf("%d",&x);
        a = x%10;
        b = x/10;
        c = b%10;
        d = b/10;
        e = d%10;
        f = d/10;
        printf("%d\n%d\n%d\n%d\n",a,c,e,f);
	a1 = x/1000;
	b1 = x/100;
        printf("\t%d\n\t%d\n\t%d\n\t%d\n",a1,c,f,a);
	printf("\t\t%d\n\t%d\n\t%d\n\t%d\n",a1,b1,b,x);
	printf("\t\t\t%d\n\t%d\n\t%d\n\t%d\n",x,b,b1,a1);
	printf("\t\t\t\t%d",y=a*1000+c*100+e*10+f);
	return (0);
}
