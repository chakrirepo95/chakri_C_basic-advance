// 13) write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments)

#include<stdio.h>
int compare(int arr1[],int i,int arr2[],int n);
int main()
{
	int a,b,i,n,m;
	printf("enter the values\n");
	scanf("%d%d",&a,&b);
	int arr1[a];
	int arr2[b];
	for(i=0;i<a;i++)
	{
		scanf("%d",& arr1[i]);
	}
	for(i=0;i<b;i++)
	{
		scanf("%d",& arr2[i]);
	}	
	m=compare(arr1,a,arr2,b);
	if(m==1)
		printf("both arrays are equal\n");
	else 
		printf("both arrays are not equal");
	return 0;
}

int compare(int arr1[],int i,int arr2[],int n)
{
	if(i!=n)
		return 0;
	else
	{
		for(i=0;i<n;i++)
			if(arr1[i]!=arr2[i])
	return 0;
	}
	return 1;
}




