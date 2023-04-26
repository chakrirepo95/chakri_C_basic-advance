// 6)Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.



#include<stdio.h>
int simple_interest(int p,float m,int i);
int main()
{
	int p,n,i;
	float si,m;
	printf("enter a princle,months,interest \n");
	scanf("%d%d%d",&p,&n,&i);
	m=n/12.0;
	si = (simple_interest(p,m,i));
	printf("%f",si);
	return 0;
}
int simple_interest(int p,float m,int i)
{
	float f;
	f = (p+(p*m*i)/100);
	return f;
}

