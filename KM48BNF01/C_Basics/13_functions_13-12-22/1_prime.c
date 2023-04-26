/* 1) Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
PrintAllPrimes - return type is void. Should use IsPrime() */

#include<stdio.h>
void all_prime(int a,int b);
int isprime(int i);
int main()
{
        int a,b;
        printf("enter the values\n");
        scanf("%d%d",&a,&b);
        all_prime(a,b);
        return 0;
}
void all_prime(int a,int b)
{
        int i=1;
        for(i=a;i<=b;i++)
        {
                if (isprime(i))
                printf("%d\n",i);
        }
        return ;
}
int isprime(int i)
{
	int j;
  for(j=2;j<=(i/2);j++)
	  if (i%j==0)
		  return 0;
  return 1;
}

                               
               


