// 8. Write a system programming your own version of cp command?

#include"ck.h"

int main(int argc, char*argv[])
{
	int i,ck,sk,ak;
	char vp[4024];
	if(argc < 3)
	{
		printf("command usage : cp <sorce> <destination>\n");
		_exit(0);
	}
	if(strcmp(argv[1],argv[2])==0)
	{
		printf("cp: '%s' and '%s' are the same files\n",argv[1],argv[2]);
		_exit(0);
	}
	ck=open(argv[1],O_RDONLY);
	if(ck < 0)
	{
		printf("cp: %d \n",ck);
		perror("open failed\n");
		_exit(0);
	}
	ak=open(argv[2],O_WRONLY | O_CREAT,0644);
	if(ak < 0)
	{
		printf("cp: %d \n",ck);
		perror("open failed\n");
		_exit(0);
	}
	while(1)
	{
		sk=read(ck,vp,4023);
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
