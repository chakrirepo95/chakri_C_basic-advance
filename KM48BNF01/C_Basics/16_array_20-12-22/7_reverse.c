// 7) Write a program to print an array in reverse order.


#include<stdio.h>
int main()
{
	int i;
	int arr[5]={1,2,3,4,5};
	for (i=4;i>=0;i--)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}

