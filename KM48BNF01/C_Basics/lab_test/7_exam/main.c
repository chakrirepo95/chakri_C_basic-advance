#include"ck.h"
int main()
{
	int d,m,y,i,n,d1,m1,y1,d2,m2,y2;
	printf("enter the values:  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
rvp:
			printf("enter the date,month and year ");
			scanf("%d%d%d",&d1,&m1,&y1);
			if (is_valid_date(d1,m1,y1))
			{
				goto rvp1;
			}
			else
			{
			printf("enter valid date ");	
				goto rvp;
			}
rvp1:
			if (i==1)
			{
				d=d1; m=m1; y=y1;
			}
			else if(i>1)
			{
				if(date_compare(d1,m1,y1,d2,m2,y2))
				{
					d=d1; m=m1; y=y1;
						
				}
			}
	}
	print_date_in_format(d,m,y);
               
	return 0;		
	}
