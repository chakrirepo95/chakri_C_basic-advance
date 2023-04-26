// 3) Write a function to accept a date and validate the date. Return 1 if the date is valid, 0 if it is not valid.



#include"ck.h"
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


		
