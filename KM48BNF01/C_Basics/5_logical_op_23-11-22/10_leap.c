/* 10) check if an year is leap year or not. A year is considered leap year in following 2 cases:
1) year is not divisible with 100, but divisible with 4
2)year is divisible with 400*/


#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if ((x%100!=0)&&(x%4==0)||(x%400==0))
		printf("%d given year is a leap year",x);
	else
		printf("%d given year  is not a leap year",x);
	return 0;
}

