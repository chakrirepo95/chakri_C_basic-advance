/* 6) Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.*/

#include<stdio.h>
int ndex(int arr[],int m);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int n,m;
	printf("enter a value upto 1 to 10 to know its index values\n");
	scanf("%d",&m);
	n=ndex(arr,m);
	if(n==-1)
		printf("element not found\n");
	else 
		printf("%d",n);
	return 0;
}
 
int ndex(int arr[],int m)
{
	int i;
	for (i=0;i<10;i++)
	{
		if(arr[i]==m)
			return i;
	}
	return -1;
}


