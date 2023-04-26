/* 1) Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written previously. return type should be void.
PrintAllPrimes - return type is void. Should use IsPrime() */

#include"ck.h"
int main()
{
	int a,b,x;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case'+':x=add(a,b);printf("%d",x);break;
		case'-':x=sub(a,b);printf("%d",x);break;
        	case'*':x=mul(a,b);printf("%d",x);break;
        	case'/':x=div(a,b);printf("%d",x);break;
        	case'%':x=mod(a,b);printf("%d",x);break;
	}
			return 0;

}
	










