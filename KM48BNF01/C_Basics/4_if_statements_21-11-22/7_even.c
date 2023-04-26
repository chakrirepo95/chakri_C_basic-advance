// 7) Read a number and print if the number is even or odd.



#include<stdio.h>
int main()
{
	int a;
	    scanf("%d",&a);
	if (a%2==0)
		printf("%d given number is even",a);
	else 
		printf("%d given number is odd",a);
	return 0;
}
