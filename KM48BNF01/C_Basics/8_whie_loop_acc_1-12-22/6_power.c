// write a program to find the power to the given number eg: i/p: 3,5 o/p: 3 to the power of 5 =243 //

#include<stdio.h>
int main()
{
	int i=1,a,n,p=1;
	printf("enter the two values\n");
	scanf("%d%d",&a,&n);
	while(i<=n)
	{
		p=p*a;
		i++;
	}
	printf("%d",p);
	return 0;
}
