// 10) Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.

#include"ck.h"
int main()
{
	int x,y,z,z1;
	printf("enter the values\n");
	scanf("%d%d",&x,&y);
	z = month(x,y);
	z1 = year(y);
	printf("month %d ",z);
	printf("year %d ",z1);
	return 0;
}

