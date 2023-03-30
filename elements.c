#include<stdio.h>
int print_element(int array[],int n, int i,int index)
{
	int j=0;
	if(n>1024 )
	{
		printf("size of the array should be 1024\n");
		return 0;
	}
	printf("enter array elements\n");
	// scanf("%d",&n);
	for(i=0;i<n;i++)
	{
loop1:
	//	scanf("%d",&array[i]);
	//	array[i]=array_ele(i);
		for( j=0;j<i;j++)
		{
			if(array[i]==0)
			{
				printf("please enter non zero number\n");
				array[i]=array_element(i); // input array element function
				goto loop1;
			}
			if(array[j]==array[i])
			{
				return -3;
			}
		}
	}
loop:
	printf("enter position of element number\n");
//	scanf("%d",&i);
	if(index < 0 || index > n-1)
	{
		index=index_input(index);//index input function
		goto loop;
	}
	printf("%d\n",array[index]);
	return OPER_SUCCESS;
}
