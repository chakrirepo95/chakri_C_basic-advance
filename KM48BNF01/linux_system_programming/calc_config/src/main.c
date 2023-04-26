#include<stdio.h>
#include"../inc/ck.h"
// int add(int a,int b);
// int sub(int a,int b);
int main()
{
	 int a=10,b=20;
	 printf("HELLO WORLD\n");
#ifdef ADD 
	 printf("addition of a-10 and b-20 : %d\n",add(a,b));
#endif 

#ifdef SUB
	 
	 printf("subtraction of b-20 and a-10 : %d\n",sub(b,a));
#endif
return 0;
}
