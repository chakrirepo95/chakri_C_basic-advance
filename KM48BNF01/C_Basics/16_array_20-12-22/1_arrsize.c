/* 1) Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers. */

#include<stdio.h>
int main()
{
	int arr[100];
	int i,j;
	printf("print all elements \n");
	for(i=0,j=1;i<100,j<=100;j++,i++)
	{
		arr[i]=j;
		printf(" %d ",arr[i]);
	}
	printf("\neven elements \n");
	for(i=0;i<100;i=i+2)

		printf(" %d ",arr[i]);

	printf("\nodd elements\n");
	for(i=1;i<100;i+=2)
		printf(" %d ",arr[i]);

	printf("\nadd 5 to all elements \n");
	for(i=0;i<100;i++)
		printf(" %d ",arr[i]+5);
	return 0;
}



