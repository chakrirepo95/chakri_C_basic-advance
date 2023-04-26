#include"ck.h"
int date_compare(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int d,m,y;
	if (y2<y1 ||y2==y1 && m2<m1 ||y2==y1 && m2==m1 && d2<d1)
		return 1;
	return 0;
}


int is_valid_date(int d,int m,int y)
{
	if (m==4||m==6||m==9||m==11)
	{
		if (d<=30 && d>0)
			return 1;
		return 0;
	}
	else if(m==1||m==3||m==5|m==7||m==8||m==10||m==12)
	{
		if (d<=31 && d>0)
			return 1;
		return 0;
	}
	else if(is_leap_year(y))
	{
		if (d<=29 && d>0)
			return 1;
		return 0;
	}
		else 
		{
			if (d<=28 && d>0)
				return 1;
			return 0;
		}
}

int is_leap_year(int y)
{
	int d;
	if ((y%100!=0 && y%4==0)||(y%400==0))
	{
		return 1;
	}
	return 0;
}






			


			



