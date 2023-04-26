/* 8) For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.*/

#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	if (x>=100)
		printf("%d above 100 calls is", y = (x-100)*1.25+250);
	else 
		printf("%d no.of calls",x=250);
	return 0;
}

