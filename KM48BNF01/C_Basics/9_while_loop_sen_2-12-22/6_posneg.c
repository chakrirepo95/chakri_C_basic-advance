// write a program read n numbers from user and print a count of how many of them were negative numbers,and how many of them positive 0 is not counted


#include<stdio.h>
int main()
{
	int a,n,i=0,c=0,c1=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a);
		if (a>0)
			c++;
		if (a<0)
			c1++;
		i++;
	}
	printf("total +ve numbers is:%d\n",c);
	printf("total -ve numbers is:%d\n",c1);
	return 0;
}


