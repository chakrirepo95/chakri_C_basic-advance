// 6. Write a system programming your own version of du & touch command?



#include"ck.h"

int main(int argc,char *argv[])
{

	int i,ck;
//	char ak[4024]={0};
	struct timespec *sk;
	for(i=1;argc>i;i++)
	{
		ck=open(argv[i],O_RDWR | O_CREAT,0644);
//		read(ck,ak,1);
//		lseek(ck,0,SEEK_SET);
//		write(ck,ak,1);
		futimens(ck,sk);
		close(ck);
	}
}
