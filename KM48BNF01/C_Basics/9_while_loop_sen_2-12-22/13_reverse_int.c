// 13) Find the reverse of an integer.

#include<stdio.h>
int main()
{
        int a,b,c,i=0;
        printf("enter the int num \n");
        scanf("%d",&a);
        c=a;
        while(a!=0)
        {
                b=a%10;
                a=a/10;
                i=i*10+b;
        }
        printf("reverse of all int %d ",i);
                return 0;
}


