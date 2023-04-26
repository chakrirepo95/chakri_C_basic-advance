// 11) Write a function to return the average of marks of all students in a class.

#include<stdio.h>
int avvg(int arr[],int m);
int main()
{
	int n,m;
	printf("enter no.of students\n");
	scanf("%d",&n);
	int arr[n];
	m=avvg(arr,n);
	printf("avvg of marks:%d\n",m);
	return 0;
}

int avvg(int arr[],int m)
{
	int i,a=0,n;
	for(i=0;i<m;i++)
	{
		printf("enter marks of stdt\n");
		scanf("%d",&n);
		arr[i]=n;
		a=a+arr[i];
	}
	return a/m;
}



	

