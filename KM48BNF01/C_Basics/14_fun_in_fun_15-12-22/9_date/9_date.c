// 9) Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older. 

#include"ck.h"
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











