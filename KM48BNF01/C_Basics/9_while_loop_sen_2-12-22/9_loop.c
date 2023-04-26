// 9) try doing the 6th program using loop inside the loop for the calculation of subject marks also.

#include<stdio.h>
int main()
{
	int x,y=1,s=0,c1=0,c2=0,c3=0,c4=0,i=1,n;
	float m;
	scanf("%d",&n);
	while(i<=n)
	{
		int y=1;
		while(y<=6)
		{
		scanf("%d",&x);
		s=s+x;
		y++;
		}
		m=((float)s/6);
		if (m>=60&&m<=100)
			c1=c1+1;
		else if (m>=50&&m<60)
			c2=c2+1;
		else if (m>=40&&m<50)
			c3=c3+1;
		else if (m>40&&m>=0)
			c4=c4+1;
		i++;
	}
	printf("1st cls%d\n 2nd cls%d\n 3rd cls%d\n fail %d\n",c1,c2,c3,c4);
	return 0;
}

