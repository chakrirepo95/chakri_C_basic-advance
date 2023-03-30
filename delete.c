#include<stdio.h>

int delete(int array[],int n, int i,int p)
{
	if(n>1024 )
	{
		printf("size of the array should be 1024\n");
		return OPER_FAIL_ARRAY_FULL;
	}
/*	int array[1024],i=0,p=0,n=0;
	printf("Enter number of elements in arrayay: ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
	{
		scanf(" %d",&array[i]);
	}
	printf("Enter the location where you have to delete\n");
	scanf("%d", &p);*/
	if(p>=n+1 || p <=0)    
	{
		printf("Delete not possible\n");
	}
	else
	{
		for(i=p-1; i<n-1; i++)
		{
			array[i]= array[i+1];
		}
		printf("after deleting an element\n");
		for(i=0; i<n-1; i++)
		{
			printf("%d\n", array[i]);
		}        
	}    
	return OPER_SUCCESS;
}

