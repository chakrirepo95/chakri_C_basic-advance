
// 6) Write a program to read n integers from the user , and count +ve numbers and -ve numbers separately. When user enters 0, stop the reading the numbers.

#include<stdio.h>
int main()
{
	int a,i,j=0,k=0;
	scanf("%d",&i);
	while(i>0)
	{
		scanf("%d",&a);
		if(a>0)
			j++;
		if(a<0)
			k++;
		if(a==0)
			break;
	i--;		
	}
printf("no. of -ve nos %d and no of +ve nos %d",k,j);
return 0;
}

