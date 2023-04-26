#include"ck.h"
int leap(int a)
{
	if((a%100!=0)&&(a%4==0)||(a%400==0))
		return 1;
	return 0;
}

