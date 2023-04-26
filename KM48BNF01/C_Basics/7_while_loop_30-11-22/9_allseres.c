// 9) Read two numbers from the user, and print all serial numbers between those numbers.


#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d%d",&i,&n);
	while (i<=n)
	{
		printf("%d",i);
		i++;
	}
	printf("\n");
	return 0;
}
