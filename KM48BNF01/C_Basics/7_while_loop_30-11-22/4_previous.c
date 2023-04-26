/* 4) Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one.*/
#include<stdio.h>
int main()
{
	int a,i=0,n;
	printf("enter count number\n");
	scanf("%d",&n);
	while(i<n)
	{
		int b;
		scanf("%d",&b);
		if (i==0)
			a=b;
		else 
			a<b?printf("%d is big ",b):printf("%d is a small\n",a);
		a=b;
		i++;
	}
	return 0;
}


