// 4) Find if a number is prime or not.

#include<stdio.h>
int main()
{
        int n,i=2,flag=1;
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
			flag=0;
        }
        if (flag==1)
                printf("%d is a prime number",n);
        else
                printf("%d is not a prime number",n);
        return 0;
}

  

      
