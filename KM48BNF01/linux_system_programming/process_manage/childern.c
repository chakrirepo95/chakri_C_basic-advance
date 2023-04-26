#include"ck.h"

void myexit();
int main()
{
	myexit();
}

void myexit()
{
	int ck=0,sk;
	char ak;
	while(1)
	{
		ck=open("abc.c",O_RDWR);
		read(0,&ak,1);
		write(ck,&ak,1);
		if(ak=='1')
			break;
		close(ck);
	}


}
