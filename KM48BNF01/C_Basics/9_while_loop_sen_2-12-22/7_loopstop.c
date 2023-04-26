// write a program to read number from user and print a count of how many of themnegative number and how many positive  if the user enters a 0 loop should stop without reading remaning number


#include<stdio.h>
int main()
{
	int a,n,i=0,c=0,c1=0;
	scanf("%d",&n);
	while (i<n)
	{
		scanf("%d",&a);
		if (a==0)
			i=n+1;
		if(a>0)
			c++;
		if (a<0)
			c1++;
		i++;
	}
		printf("total +ve numbers is:%d\n",c);
		printf("total -ve numbers is:%d\n",c1);
		return 0;
}

