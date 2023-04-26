/* 6) Find the power bill for the input number of units :
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600*/

#include<stdio.h>
int main()
{
	int a;
	float y;
	scanf("%d",&a);
	if ((a>=0)&&(a<=200))
		printf("%d is bill for %d",a,(100*1));
	else if ((a>200)&&(a<=400))
	{
		y = a-200;
		y = y*0.65+100;
		printf(" %d is bil for %f",a,y);
	}
	else if ((a>400)&&(a<=600))
	{
		y = a-400;
		y = y*0.80+230;
		printf("%d is bill for %f",a,y);
	}
	else
	{
		y = a-600;
		y = y*1+390;
		printf("%d is bill for %f",a,y);
	}
	return 0;
}

