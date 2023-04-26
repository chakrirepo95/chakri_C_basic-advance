// 3) Write a function to accept a date and validate the date. Return 1 if the date is valid, 0 if it is not valid.

#include<stdio.h>
int validdate(int d,int m ,int y );
int main()
{
	int d,m,y,z;
	printf("enter the date,month and year ");
	scanf("%d%d%d",&d,&m,&y);
	z= validdate(d,m,y);
	if(z==1)
		printf("%d-%d-%d is a valid date \n",d,m,y);
	else 
		printf("%d-%d-%d is a invalid date \n", d,m,y);
	return 0;
}
int validdate(int d,int m,int y)
{
//	if(m>=1&&m<=12&d>=1&&d<=31)
//	{
		if (m==4||m==6||m==9||m==11)
		{
			if (d<=30 && d>0)
				return 1;
		}
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		{
			if (d<=31 && d>0)
				return 1;
		}
		else if (m==2)
		{
			if ((y%100!=0 && y%4==0)||(y%400==0))
			{
				if (d<=29 && d>0)
					return 1;
			}
			else if (d<=28 && d>0)
				return 1;
	}
//}
	return 0;
}



		
