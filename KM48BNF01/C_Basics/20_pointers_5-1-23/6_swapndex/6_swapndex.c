// 6) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.


#include"ck.h"
int main()
{
	int i, ak[2];
	printf("enter n values \:n" );
	scanf("%d%d",&ak[0],&ak[1]);
	swap1(&ak[0],&ak[1]);
	printf("swap 0: %d swap 1: %d\n",ak[0],ak[1]);
	return 0;
} 
