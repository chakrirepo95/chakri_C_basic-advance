/* 3) Read a 4 digit integer into a single variable, using the single variable, print the output in below format, using escape sequences and different formats:

eg., input: 3476

output expected:
      3
    34
   347 
3476*/



#include<stdio.h>
int main()
{
	int x;
	printf("enter the 4 values");
	scanf("%d%d",&x);
	printf("   %d\b\b\b   \n",x);
	printf("  %d\b\b  \n",x);
	printf(" %d\b \n",x);
	printf("%d\n",x);
	return 0;
}
