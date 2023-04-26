// 2. Write a system programming your own version of cat commandi?

/* #include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> */

#include "ck.h"
int main(int argc, char*argv[])
{
	int i,ck,sk;
	char vp[1024];
	if(argc < 2)
		printf("command usage : ckcat<file name>\n");
	for(i=1;argc>i;i++)
	{
		ck=open(argv[i],O_RDONLY);
		if(ck < 0)
		{
			printf("cat: %d \n",ck);
			perror("open failed\n");
			continue;
		}
		while(1)
		{
			sk=read(ck,&vp,1023);
			if(sk<0)
			{
				printf("cat :%s \n",argv[i]);
				perror("read failed\n");
				break;
			}
			if(sk==0)
				break;
			write(1,&vp,sk);
		}
		close(ck);
		printf("\n");
	}
}
