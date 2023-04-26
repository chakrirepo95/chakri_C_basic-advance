#include"ck.h"

void mywait();
int main()
{
	mywait();
}

void mywait()
{
	int ck=0,sk;
	char ak;
	while(1)
	{
		ck=open("abc.c",O_RDONLY);
		sleep(1);
		read(ck,&ak,1);
		write(1,&ak,1);
		if(ak=='1')
			break;	
	close(ck);
	}
}
