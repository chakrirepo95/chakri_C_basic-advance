// 5) WAP to print if a year is leap year or not. Modify the date validation program using this.
#include<stdio.h>
#define leap(y) ((y%100!=0 && y%4==0)||(y%400==0))
int main()
{
	int d,m,y,i,n=0,d1;
	printf("enter the date,month,year values: \n");
	scanf("%d%d%d",&d,&m,&y);
	if (m==4||m==6||m==9||m==11)
	{
		if (d1<=30 && d1>0)
			n=1;
	}
	else if(m==1||m==3||m==5|m==7||m==8||m==10||m==12)
	{
		if (d1<=31 && d1>0)
			n=1;
	}
	else if	(leap(y))
	{
		if (d1<=29 && d1>0)
			n=1;
	}
		else 
		{
			if (d1<=28 && d1>0)
				n=1;
		}
if (leap(y))
	printf(" it is a  leap year \n");
else
	printf("it is not a leap year\n");
if (n==1)
	printf("it is not a valid date \n");
else 
	printf("it is a valid date \n");
return 0;
}




















