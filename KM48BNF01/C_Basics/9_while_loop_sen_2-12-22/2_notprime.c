//write a program if a given number is not prime whenever the 1st factor is found print prime when no factor is found 

#include<stdio.h>
int main()
{
        int i=2,s=0,n;
        scanf("%d",&n);
        while(i<n)
        {
                if(n%i==0)
		{
			s=s+1;
			i=n+1;
		}
                i++;

        } 
        if((i==n)&&(s<1))
                printf("%d it is not a prime number",s);
        else
                printf("%d it is a prime number",s);

        return 0;
}            
