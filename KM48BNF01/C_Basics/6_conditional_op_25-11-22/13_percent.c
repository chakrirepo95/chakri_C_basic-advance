#include<stdio.h>
int main()
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
	x=((a+b+c+d+e+f)/6);
	x=(x/10);
	switch(x)
	{
		case 0:
			break;

		case 1:
			break;

		case 2:
			break;

		case 3:
			printf("%d marks grade is fail",x);
			break;
		case 4:
			printf("%d marks grade is 3rd",x);
			break;
		case 5:
			printf("%d marks grade is 2nd",x);
			break;
		case 6:
		case 7:
			printf("%d marks grade is 1st",x);
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			printf("%d marks grade is honours",x);
			break;
		default:
			printf("%d marks grade is fail",x);
			break;
	}
	return 0;
}




