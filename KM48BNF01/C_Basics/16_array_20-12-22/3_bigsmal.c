/* 3) Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . Find out the biggest and smallest numbers and their indexes and print. */

#include<stdio.h>
int main()
{
	int i,x,y,w,z;
	int arr[10]={5,6,3,8,9,7,12,13,15,18};
	for(i=0;i<10;i++)
		if(i==0)
		{
			x=arr[i];
			w=i;
			y=arr[i];
			z=i;
		}
		else
		{
			if(arr[i]>x)
			{
				x=arr[i];
			w=i;
			}
			if(arr[i]<y)
			{
				y=arr[i];
			z=i;
			}
		}
	printf("biggest num is %d index value is %d\nsmallest num is %d index value is %d\n",x,y,w,z);
	return 0;
}


