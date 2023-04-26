/* 14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count. 
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};

output : biggest number is repeated 4 times */

#include<stdio.h>
int bigrepeat(int arr[],int);
int main()
{
	int n,m;
	printf("enter n value\n ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a values\n");
		scanf("%d",&arr[i]);

	}
	m=bigrepeat(arr,n);
	printf("biggest number is repeated %d times",m);
	return 0;
}

int bigrepeat(int arr[],int n)
{
	int i,c=0,h=0;
	for(i=0;i<n;i++)
	{
		if(i==0)
			c=arr[i];
		else 
		{
			if(arr[i]>c)
			
			{
			c=arr[i];
			h=0;
			}
		}
		if (c==arr[i])
			h++;
	}
	return h;
}



