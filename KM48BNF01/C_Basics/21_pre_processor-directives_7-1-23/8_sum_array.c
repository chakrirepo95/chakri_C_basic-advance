// 8) Define a  macro, to compute the sum of all elements in an array. It receives array name and the number of elements as arguments.

#include<stdio.h>
#define s(ak,i)  for(i=0;i<n;i++) c=c+ak[i];
int main()
{
	int i,n,c=0;
	printf("enter the array\n");
	scanf("%d",&n);
	int ak[n];
        for(i=0;i<n;i++) 
	{
		printf("enter an array element\n");
		scanf("%d",&ak[i]);

	}
    	s(ak,i);
	printf(" sum of %d\n",c);
	return 0;
} 
