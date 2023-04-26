// 6. Write a system programming your own version of du command?

#include"ck.h"

int main(int argc,char *argv[])
{

	int i,ck,sk;

	struct stat ak;
	for(i=1;argc>i;i++)
	{
/*		ck=open(argv[i],O_RDWR);
		if(ck<0)
		{
			printf("ck :%s :\n"argv[i]);
			perror("");
			continue;
		}*/
		ck=stat(argv[i],&ak);
		if(ck<0)
			perror("");
		printf("%d\t%s\n"ak.st_size,argv[i]);

	}
}
