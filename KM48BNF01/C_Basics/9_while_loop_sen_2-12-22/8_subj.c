// 8)for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print how many students got first class (>60%) , how many students got second class (>50%) and how many students are just passed (>40%) and how many failed.



#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,s=0,c1=0,c2=0,c3=0,i=1,n;
	float m;
	scanf("%d",&n);
	while (i<=n)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		m=a+b+c+d+e+f;
		m=((float)m/6);
		if (m>=60)
			c=c+1;
		else if (m>=50&&m<60)
			c1=c1+1;
		else if (m>=40&&m<50)
			c2=c2+1;
		else if (m<40&&m>=0)
			c3=c3+1;
		i++;
	}
	printf("%d 1st cls\n %d 2nd cls\n %d just passed\n %d failed\n",s,c1,c2,c3);
	return 0;
}


