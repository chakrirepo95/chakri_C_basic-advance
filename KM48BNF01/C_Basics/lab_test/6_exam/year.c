#include"ck.h"
int isleapyear(int y)
{
	int z;
	if((y%100!=0 && y%4==0)||(y%400==0))
	{
		z=29;
		return z;
	}
	else 
		z=28;
	return z;
}



		
