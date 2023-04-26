// 7) Define  a macro that receives an array and the number of elements in the array as arguments. Write a program using this macro to print out the elements of an array.

#include<stdio.h>
#define s(ak,i)  for(i=0;i<n;i++)  printf("%d\n",ak[i]);
int main()
{
	int i,n;
	printf("enter the array\n");
	scanf("%d",&n);
	int ak[n];
        for(i=0;i<n;i++) 
	{
		printf("enter an array element\n");
		scanf("%d",&ak[i]);

	}
	s(ak,i);
	return 0;
} 
