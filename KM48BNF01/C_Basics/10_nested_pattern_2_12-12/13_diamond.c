#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value : ");
	scanf("%d",&a);
	for (b=1;b<=a;b++)
	{
		for(c=a-b;c>0;c--)
			printf("   ");
		for(c=2*b-1;c>0;c--)
			printf(" * ");
		printf("\n");

	}
	for(b=1;b<=a;b++)
	{
		for(c=b;c>0;c--)
			printf("   ");
		for(c=a-b,c=2*c-1;c>0;c--)
			printf(" * ");
		printf("\n");
	}
	return 0;
}
