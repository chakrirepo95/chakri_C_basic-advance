// 7)Take an integer as input and print its magnitude (remove sign).

#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	(a>=0)?printf("%dis a",a):printf("%d is a",-a);
	return 0;
}

