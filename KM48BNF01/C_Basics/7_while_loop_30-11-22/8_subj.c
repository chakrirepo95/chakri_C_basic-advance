// 8) for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).


#include<stdio.h>
int main()
{
	int i=1,n,h,m;
	printf("enter the n value ");
	scanf("%d",&n);
	while (i<=n)
	{
		int a,b,c,d,e,f,g,x;
		printf("enter the student marks ");
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		g=a+b+c+d+e+f;
		x=(g/6);
		if(i==1)
		{
			h=x;
			m=i;
		}
		else if (h<x)
		{
			m=i; h=x;
		}
		i++;
	}	
	printf("%d percent std num %d\n",h,m);
	return 0;
}



