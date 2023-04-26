#include<stdio.h>
int main()
{
        int y,m,d,y1,m1,d1;
        scanf("%d%d%d%d%d%d",&y,&m,&d,&y1,&m1,&d1);
        if ((y==y1)&&(m==m1)&&(d==d1))
                printf("both are same age persons");
        else if ((y>=y1)&&(m>=m1)&&(d>=d1))
                        {
                                printf("person  born on %d%d%d is older",d1,m1,y1);
                        }
                        else
                                printf("person born on %d%d%d is older",d,m,y);
               /* }
                else
                        printf("person born on %d%d%d is older",d,m,y);
        }
        else
                printf("person born on %d%d%d is older",d,m,y);*/
        return 0;
}


