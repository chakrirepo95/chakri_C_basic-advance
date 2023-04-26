#include<stdio.h>
int main()
{
	int a,b=1,c=0;
	printf("enter a number\n");
	scanf("%d",&a);
	if (a<=0)
		c++;
	while(b>c)
	{
		printf("*");
		c++;
		if(c==a)
			c++;
		else if (c==b)
		{
			c=0;
			b++;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

