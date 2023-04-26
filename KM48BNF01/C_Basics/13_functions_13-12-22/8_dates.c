 //8) Write a function to accept two dates as input arguments and return the difference in number of days.

#include<stdio.h>
int date (int,int,int,int,int,int,int);
int month(int,int,int,int,int,int);
int valid(int,int,int,int,int,int);
int main()
{
        int c,d2,m2,y2,d1,m1,y1;
        printf("enter the dates,month and year \n");
        scanf("%d%d%d%d%d%d",&d1,&m1,&y1,&d2,&m2,&y2);
        c=valid(d2,m2,y2,d1,m1,y1);
        if (c==0)
                printf(" please enter a valid date\n ");
        return 0;
}


int valid(int d1,int m1,int y1,int d2,int m2,int y2)
{
        int a,b,c,x,n,m,d;
	x = 0;
        if((y2<y1)||(y2==y1)&&(m2<m1)||(y2==y1)&&(m2==m1)&&(d2<d1))
	{
		a=d1; b=m1; c=y1;
		d1=d2; m1=m2; y1=y2;
		d2=a; m2=b; y2=c;
	}
	switch(m1)
	{
	       	case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:if(d1<=31 && d1>0)
			{
				x=1;
				n=31;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:if(d1<30 && d1>0)
			{
				x=1;
				n=30;
			}
			break;
		case 2: if((y1%100!=0 && y1%4==0)||(y1%400==0))
			{
				if (d1<=29 && d1>0)
				{
					x=1;
					n=29;
				}

			}
			else
			{
				if (d1<=28 && d1>0)
				{
					x=1;
					n=28;
				}
			}
			break;
		default:
			x=0;
			break;
		}

if(x==1)
{
        x=0;
        if (m2<=12)
        {
		if (m2==4||m2==6||m2==9||m2==11)
		{
			if(d2<30 && d2>0)
				x=1;
		}
		if (m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)
		{
			if(d2<=31 && d2>0)
				x=1;
		}
		if((y2%100!=0 && y2%4==0)||(y2%400==0))
                {
			if (d2<=29 && d2>0)
				x=1;
		}	
	}
}
if (x==1)
{
	m=month(d1,m1,y1,d2,m2,y2);
	d=date(d1,m1,y1,d2,m2,y2,n);
	d=d+m;
	printf("%d days\n",d);
                return 1;
}
else
        return 0;
}



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
			{
			d=d2-d1;
			}
	else 
	{
	
	d=(n-d1)+d2;
	printf("%d\n",d);

	}
	return d;
}

			
		

