// 1) Read n number of numbers from user (n value taken as input) and print if each number is even or odd.

#include<stdio.h>
int main()
{
	int a,n,i=1;
	scanf("%d",&n);
	while (i<=n)
	{
		scanf("%d",&a);
		if (a%2==0)
			printf("%d it is a even\n",a);
		else
			printf("%d it is a odd\n",a);
		i++;
	}
	return 0;
}

		




