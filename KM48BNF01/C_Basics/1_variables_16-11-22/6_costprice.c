 /*6)if sale price and profit of n items is given find the cost price of 1 item.
eg., number of items : 15
        sale price of 15 items : 500
        profit : 50
        cost price of each item: 30*/


#include<stdio.h>
int main ()
{
        int sp,n,p,cp,cp1;
        printf("enter sale price,profit,number ofitems");
        scanf("%d%d%d",&sp,&p,&n);
           cp = sp-p;
           cp1 = cp/n;
        printf("cost price of 1 item is = %d", cp1);
        return 0;
}

           
