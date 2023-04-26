// 2) Write down a macro to find the biggest of four numbers using biggest of 2 macro.

#include<stdio.h>
#define s(x,y) (x>y?x:y)
#define k(w,x,y,z) (s(w,x)>s(y,z)?s(w,x):s(y,z))
int main()
{
int w,x,y,z;
	printf(" enter a values\n");
	scanf("%d%d%d%d",&w,&x,&y,&z);
	printf("%d is bigger \n",k(w,x,y,z));
	return 0;
}
