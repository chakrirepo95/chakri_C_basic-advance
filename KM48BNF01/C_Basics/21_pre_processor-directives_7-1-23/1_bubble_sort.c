// 1) Write down a macro to find out the biggest of two numbers. MAX(x,y) should define code to find biggest of x and y. Implement array sorting function using this macro (Bubble sort)

#include<stdio.h>
#define s (x>y)
#define k (ak[i]>ak[j])
int main()
{
	int i,j,n,temp,x,y;
	printf("enter x,y  values\n");
	scanf("%d%d",&x,&y);
	if s
		printf("x is bigger %d\n",x);
	else
		printf("y is bigger %d\n",y);
	printf("enter  N value\n");
	scanf("%d",&n);
	int ak[n];
	for(i=0;i<n;i++)
	{
		printf("enter a value\n");
		scanf("%d",&ak[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if k
			{
				temp=ak[i];
				ak[i]=ak[j];
				ak[j]=temp;
			}
		}
	}
	printf("in ascending order\n");
	for(i=0;i<n;i++)
	printf("%d ",ak[i]);
	printf("\n");
	return 0;
} 
