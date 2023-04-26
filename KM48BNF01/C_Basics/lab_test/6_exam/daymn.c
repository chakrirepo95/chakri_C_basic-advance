#include"ck.h"
int no_of_days_in_month(int m,int y)
{
	int z;
	if (m==4||m==6||m==9||m==11)

		z=30;
	 else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		z=31;
	 else if (m==2)
		z=isleapyear(y);

	printf("z=%d",z);
		return z;
}


