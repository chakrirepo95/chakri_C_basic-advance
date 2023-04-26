// 6) Write a macro to find if a number is prime number or not. Using this macro,print all prime numbers between 2 given numbers.

#include<stdio.h>
#define primebw(i)  for(i=2,c=0;i<=n/2;i++)
#define prime(i)  for(i=2;i<=(n/2);i++)
int main()
{
	int n,x,i=2,c=0,flag=1;
	scanf("%d%d",&n,&x);
	for(;n<=x;n++)
	{
	//	for(i=2,c=0;i<=n/2;i++)
		primebw(i)
		{
			if(n%i==0)
			{
				c++;
				break;
			}
		}
		if (c==0)
			printf("%d \n",n);
	}
	
	scanf("%d",&n);
     //   for(i=2;i<=(n/2);i++)
	prime(i)
	{
		if(n%i==0)
			flag=0;
        }
        if (flag==1)
                printf("%d is a prime number \n",n);
        else
                printf("%d is not a prime number \n",n);
        return 0;
}

  


