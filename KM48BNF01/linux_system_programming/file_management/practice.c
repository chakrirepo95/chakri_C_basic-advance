#include"ck.h"

int main(int argc ,char * argv[])
{
	int i,ck,sk,ak;
	char c[4001];
	if(argc < 3)
	{
		printf("cp command  <source> <destination>\n");
		_exit(0);
	}
	if(strcmp(argv[1],argv[2])==0)
	{
		printf("cp :'%s' and '%s' are the same files\n",argv[1],argv[2]);
		_exit(0);
	}
	ck=open(argv[1],O_RDONLY);
	if(ck < 0)
	{
		perror("read failed");
		printf("%s",argv[1]);
		_exit(0);
	}
	sk=open(argv[2],O_WRONLY | O_CREAT,0644);
	if(sk < 0)
	{
		perror("read failed");
		printf("%s",argv[2]);
		_exit(0);
	}
	while(1)
	{
		ak=read(sk,c,4000);
		if(ak < 0)
		{
			perror("read failed");
			printf("%s",argv[i]);
			break;
		}
		if(ak==0)
			break;
		write(sk,c,ak);
	}
	close(ck);
	close(sk);
}
