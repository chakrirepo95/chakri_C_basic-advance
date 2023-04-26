// 4) Write a program to print the value of below series:

#include<stdio.h>
int main()
{
	int i=1,n;
	float s=0;
	scanf("%d",&n);
	while(i<=n)
	{
	       	if (i%2==0)
			s=s-1/i;
		else 
			s=s+1/i;
		i++;
	}
	printf("%f",s);
	return 0;
}




