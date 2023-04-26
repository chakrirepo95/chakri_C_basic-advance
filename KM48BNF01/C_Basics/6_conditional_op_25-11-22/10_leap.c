// 10)check if an year is leap year or not.


Switch Statement
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	((x%100!=0)&&(x%4==0)||(x%4==0))?printf("%d is a leap year",x):printf("%d is not a leap year",x);
	return 0;
}

