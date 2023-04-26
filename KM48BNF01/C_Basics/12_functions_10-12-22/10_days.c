// 10)Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.

#include<stdio.h>
int month(int x,int y);
int year(int y);
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
int month(int x,int y)
{
	if(x==4|x==6||x==9||x==11)
		x=30;
	else if (x==1||x==3||x==5||x==7||x==8||x==10||x==12)
		x=31;
	else if ((y%100!=0 && y%4==0)||(y%400==0))
		x=29;
	else
		x=28;
	return x;
}
int year(int y)
{
	int z;
	if ((y%100!=0 && y%4==0)||(y%400==0))
		z=366;
	else
		z=365;
	return z;
}


