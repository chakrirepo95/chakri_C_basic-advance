#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>




int main(int argc, char*argv[])
{
	int i,ck,sk,ak;
	char vp[1024];
	if(argc < 3)
		printf("command usage : cp <sorce> <destination>\n");
	for(i=1;argc>i;i++)
	{
		ck=open(argv[1],O_RDONLY);
		ak=open(argv[2],O_WRONLY | O_CREAT,0644);
		if(ck < 0)
		{
			printf("cp: %d \n",ck);
			perror("open failed\n");
			continue;
		}
		if(ak < 0)
		{
			printf("cp: %d \n",ck);
			perror("open failed\n");
			continue;
		}
		while(1)
		{
			sk=read(ck,vp,1023);
			if(sk<0)
			{
				printf("cp:%s \n",argv[i]);
				perror("read failed\n");
				break;
			}
			if(sk==0)
				break;
			write(ak,vp,sk);
		}
		close(ck);
		close(ak);
	}	
}
