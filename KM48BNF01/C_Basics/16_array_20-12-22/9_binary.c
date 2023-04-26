// 9) Write a program to print an integer in binary format using arrays.
#include<stdio.h>
int main()
{
	int a,b,c=0,n;
	printf("enter a value\n");
	scanf("%d",&a);
	n=a;
	for(b=0;a>0;b++)  //
		a=a/2;   //
	int arr[b];      //b=100
	for(c=0;n>0;c++)
	{
		arr[c]=n%2;
		n=n/2;
	}
	for(--b;b>=0;b--)  //b=c
		printf("%d ",arr[b]);
	return 0;
}





