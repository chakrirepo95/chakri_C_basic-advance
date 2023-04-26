#include"ck.h"
int month(int d1,int m1,int y1,int d2,int m2,int y2)
{
       int n=12,m=0;
m1=m1+1;
for(;y1<=y2;y1++)
{
	if(y1==y2)
		n=m2-1;
	for(;m1<=n;m1++)
	{
		if (m1==4||m1==6||m1==9||m1==11)
		{
			m=m+30;

		}
		else if (m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
		{
			m=m+31;
		}
		else
		{ 
			if((y1%100!=0 && y1%4==0)||(y1%400==0))
				m=m+29;
			else
				m=m+28;
		}

	}
	m1=1;
}
	return m;
}
int date(int d1,int m1,int y1,int d2,int m2,int y2,int n)
{
	int d=0;
	if((d2==d1)&&(m2==m1)&&(y2==y1))
		d=0;
	else if((y2==y1)&&(m2==m1)&&(d2<d1))
			d=d2-d1;
	else 
	
	d=(n-d1)+d2;

	return d;
}
