// 12) Write a function to modify the array such that all negative numbers are converted to positive.

#include<stdio.h>
void positive(int arr[]);
int main()
{
	int arr[]={5,-6,-9,-8,8};
	int i;
	positive(arr);
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
	return 0;
}

void positive(int arr[])
{
	int i=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
			arr[i]=-arr[i];
	}
	return ;
}


