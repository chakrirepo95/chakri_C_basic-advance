// 6) Read  n numbers from user ,and print the smallest number of all.

#include<stdio.h>
int main()
{
	int i=1,v,n,a;
	scanf("%d",&n);
	while (i<=n)
	{
	
		scanf("%d",&a);
		if (i==0)
			v=a;
		else if (v>a)
		{
			v=a;
		}
		i++;
	}
		printf("%d is a small number",v);
	return 0;
}
