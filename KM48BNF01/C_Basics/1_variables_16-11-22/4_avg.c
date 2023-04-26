//4)calculate average of 4 integer numbers and print the output.

#include<stdio.h>
int main ()
{
	int a,b,c,d; float avg;
	printf("enter a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int sum = a+b+c+d;
	avg =sum/4;
	printf("avg of 4 numbers =%f",avg);
	return 0;
}
