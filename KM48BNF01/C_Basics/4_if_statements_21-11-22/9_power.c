/* 9) Find the power bill for the input number of units :
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600*/



#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if (x<=200)
		printf("%d no.of units cost",(x=200));
	else if (x<=400)
		printf("%d no.of units cost",y=100+(x-200)*0.65);
	else if (x<=600)
		printf("%d no.of units cost",y=230+(x-400)*0.80);
	else 
		printf("%d no.of units cost",y=390+(x-600)*1.00);
	return 0;

}
