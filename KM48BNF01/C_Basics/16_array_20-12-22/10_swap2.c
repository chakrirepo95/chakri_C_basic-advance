#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	int i,j,p;
	for(i=0,j=4;i<5;i++,j--)
	{
		p=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=p;
	}
	printf("output for array1\noutput for array2");
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ", arr2[i]);
	return 0;
}



