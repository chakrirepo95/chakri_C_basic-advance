// 7) write a program to read integers from the user and add them as long as the user enters positive numbers. Stop and print the sum when the user enters negative number.

#include<stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d",&a);
	while(a>0)
	{
		scanf("%d",&b);
		if(b>=0)
			s=s+b;
		if(b<0)
			break;
		a--;
		}
	printf("sum of n numbers %d\n",s);
	return 0;
}

