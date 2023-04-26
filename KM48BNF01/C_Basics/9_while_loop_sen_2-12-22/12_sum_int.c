// 12) Find the sum of digits in a given integer.

#include<stdio.h>
int main()
{
	int a,b,c,i=0;
	printf("enter the int num \n");
	scanf("%d",&a);
	c=a;
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		i=i+b;
	}
	printf(" sum of all int %d ",i);
		return 0;
}


