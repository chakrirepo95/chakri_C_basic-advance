// write a program to count and print how many nummbers are divisible with 10 between 2 given numbers

#include<stdio.h>
int main()
{
	int a,b,m,i=1;
	scanf("%d%d",&a,&b);
	if (a%10==0)
		m=a;
	else
	{
		m=a%10;
		m=10+(a-m);
	}
	while (i<=b)
	{
		if (m%10==0)
		{

			i++;
			m=m+10;
		}
		printf("the total count is %d\n",i);
		return 0;
	}
}

