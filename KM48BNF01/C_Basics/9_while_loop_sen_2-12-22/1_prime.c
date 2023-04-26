//write a program if a given number is prime or not based on number of factors counting   

#include<stdio.h>
int main()
{
	int i=1,s=0,n;
	scanf("%d",&n);
	while(i<=n)
	{
		if (n%i==0)
		
			s=s+1;
		i++;
		
	}
	if (s==2)
		printf("%d it is a prime number",n);
	else 
		printf("%d it is not a prime number",n);
	return 0;
}

