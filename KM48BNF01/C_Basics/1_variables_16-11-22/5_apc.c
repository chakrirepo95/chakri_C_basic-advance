//5)calculation of area and perimeter of rectangle,square and circle in three different programs.

#include<stdio.h>
int main ()
{
        float area;int perimeter,r;
        printf("enter the radius");
        scanf("%d",&r);
        area = 3.14*r*r;
        perimeter = 2*3.14*r;
        printf("area of circle =%f",area);
        printf("perimeter of circle =%d",perimeter);
        return 0;
}
                 
