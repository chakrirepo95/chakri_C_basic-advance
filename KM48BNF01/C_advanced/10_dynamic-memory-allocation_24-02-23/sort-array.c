// 1) Create a dynamic array of integers. Take input from user , sort the array and display the output.


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,j,n,a;
	void *ptr;
	printf("enter number of array elements\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",((int *)ptr+i));
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*((int *)ptr+j)>*((int *)ptr+j+1))
			{
				 a=*((int *)ptr+j);
				*((int *)ptr+j)=*((int *)ptr+j+1);
				*((int *)ptr+j+1)=a;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*((int *)ptr+i));
	}
	printf("\n");
	return 0;
}





