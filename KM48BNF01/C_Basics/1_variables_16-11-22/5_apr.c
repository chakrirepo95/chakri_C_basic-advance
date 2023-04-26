//5)calculation of area and perimeter of rectangle,square and circle in three different programs.

#include<stdio.h>
int main ()
{
	int b,l,area,perimeter;
	printf("enter length,breath");
	scanf("%d%d",&l,&b);
	area = l*b;
	perimeter = 2*(l+b);
	printf("area of rectangular =%d",area);
	printf("perimeter of rectangular =%d",perimeter);
	return 0;
}

	
