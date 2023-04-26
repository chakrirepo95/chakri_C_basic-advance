#include"ck.h"
void message()
{
	static int m=1;
	if(m%10==1)
		printf("hello! i am called %dst\n",m);
	else if (m%10==2)
		printf("hello! i am called %dnd\n",m);
	else if (m%10==3)
		printf("hello! i am called %drd\n",m);
	else 
		printf("hello! i am called %dth\n",m);
	m++;
}

