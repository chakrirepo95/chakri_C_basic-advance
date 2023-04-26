#include"ck.h"
int calsal(int total,int lop,int m,int y)
{
	int ns,f;
	f= no_of_days_in_month(m,y);
	printf("f = %d",f);
	ns=total-lop*total/(float)f;
	return ns;
}

