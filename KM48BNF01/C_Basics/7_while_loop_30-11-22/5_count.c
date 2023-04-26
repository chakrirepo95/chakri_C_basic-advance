// 5) Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number.


#include<stdio.h>
int main()
{
	int i=0,n,v;
	scanf("%d",&n);
	while(i<n)
	{
		int a;
		scanf("%d",&a);
		if (i==0)
		{
			v=a;
			i++;
		}
		else if(v<a)
		{
			printf("%d\n",a);
		v=a;
		i++;
	}
	}
	return 0;
}


