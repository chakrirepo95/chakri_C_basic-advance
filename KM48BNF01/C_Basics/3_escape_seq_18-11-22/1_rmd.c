// write  a program that read an integer and displays the right most digit of the number
#include<stdio.h>
int main()
{
	int a,div;
	printf("enter a value : ");
	scanf("%d",&a);
	div =a%10;
	printf("right most number is %d ",div);
	return 0;
}

