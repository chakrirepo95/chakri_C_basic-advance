//4) Write a function to return the product of two numbers without using * operator.



#include"ck.h"
int main()
{
	int a,b,c;
	printf("enter two numbers : ");
	scanf("%d%d",&a,&b);
	c = product(a,b);
	printf("product of two number is %d ",c);
	return 0;
}


