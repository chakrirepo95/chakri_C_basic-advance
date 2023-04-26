// 4) Write a function that takes an integer parameter and prints its multiplication table.return type should be void.


#include"ck.h"
int main()
{
	int a,b;
	printf("enter a value\n");
	scanf("%d",&a);
	for(b=1;b<=10;b++)
		mul(a,b);
	return 0;
}

