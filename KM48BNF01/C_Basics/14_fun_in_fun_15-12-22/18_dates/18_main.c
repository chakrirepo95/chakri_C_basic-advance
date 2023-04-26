// 8) Write a function to accept two dates as input arguments and return the difference in number of days.
#include"ck.h"
int main()
{
        int c,d2,m2,y2,d1,m1,y1;
        printf("enter the dates,month and year \n");
        scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
        c=valid(d2,m2,y2,d1,m1,y1);
        if (c==0)
                printf(" please enter a valid date\n ");
        return 0;
}


