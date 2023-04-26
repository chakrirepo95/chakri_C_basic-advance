// 10) Divide a number with another number and find the quotient without using / operator. Print the remainder without using % operator.



#include<stdio.h>
int main()
{
	int a,b,n,i=0;
	printf("enter the two numbers ");
	scanf("%d%d",&a,&n);
	if (a<n)
	{
		b=a;
		a=n;
		n=b;
	}
	while(a>=n)
	{
		a=a-n;
		i++;
	}
	printf("%d is coefficient\n",i);
	printf("%d is remainder\n",a);
}

