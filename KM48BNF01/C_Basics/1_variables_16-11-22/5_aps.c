//5)calculation of area and perimeter of rectangle,square and circle in three different programs.

#include<stdio.h>
int main ()
{
        int s;float area,perimeter;
        printf("enter sides of square");
        scanf("%d",&s);
        area = s * s;
        perimeter = s * 4;
        printf("area of square =%f",area);
        printf("perimeter of square =%f",perimeter);
        return 0;
}

