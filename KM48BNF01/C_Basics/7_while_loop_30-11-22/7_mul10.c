// 7) Read a number from user, and print its multiplication table upto 10 multiples.


#include<stdio.h>
int main ()
{
	int a,i=1,n=10;
	scanf("%d",&a);
	while (i<=n)
	{
		printf("%d*%d=%d\n",a,i,a*i);
		i++;
	}
	return 0;
}

