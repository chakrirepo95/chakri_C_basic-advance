// 9)Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older.


#include<stdio.h>
int date (int d,int m,int y,int d1,int m1,int y1);
int main()
{
	int v,d,m,y,d1,m1,y1;
	printf("enter the dates\n");
	scanf("%d%d%d%d%d%d",&d,&m,&y,&d1,&m1,&y1);
	v=date(d,m,y,d1,m1,y1);
	if (v==1)
		printf("%d-%d-%d is elder",d,m,y);
	else if (v==0)
		printf("%d-%d-%d is elder ",d1,m1,y1);
	else 
		printf(" is a invalid date\n ");
	return 0;
}
int date (int d,int m,int y,int d1,int m1,int y1)
{
	int v=0;
	if(m<=12)
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:if(d<=31 && d>0)
					v=1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:if(d<30 && d>0)
					v=1;
				break;
			case 2: if((y%100!=0 && y%4==0)||(y%400==0))
				{
					if (d<=29 && d>0)
						v=1;
				}
				else
					if (d<=28 && d>0)
						v=1;
				break;
		}
	}

if(v==1)
{
	v=0;
	if (m1<=12)
	{
		switch(m1)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:if(d<=31 && d>0)
					v=1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:if(d<30 && d>0)
					v=1;
				break;
			case 2: if((y%100!=0 && y%4==0)||(y%400==0))
				{
					if (d<=29 && d>0)
						v=1;
				}
				else
					if (d<=28 && d>0)
						v=1;
				break;
		}
	}
}
if (v==1)
{
	if ((y<y1)||(y==y1 && m<m1)||(y==y1 && m==m1 && d<d1))
		return 1;
	return 0;
}
else 
return 2;
}












