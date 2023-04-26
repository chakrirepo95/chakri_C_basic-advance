// 4)Write a function that takes an integer parameter and prints its multiplication table.return type should be void.


#include<stdio.h>
void mul(int a,int b);
int main()
{
	int a,b;
	printf("enter a value\n");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
		mul(a,b);
	return 0;
}
void mul(int a,int b)
{
	printf("%d*%d=%d\n",a,b,a*b);
	return ;
}

