#include"ck.h"
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


