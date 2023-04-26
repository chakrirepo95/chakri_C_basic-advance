// 8) Write a function to accept a year as input and return 1 if the year is a leap year, otherwise returns  0.


#include"ck.h"
int main()
{
	int a,b;
	printf("enter a value\n");
	scanf("%d",&a);
	b=leap(a);
	if (b==1)
	printf("it is a leap");
	else 
		printf("it is not a leap");
	return 0;
}

