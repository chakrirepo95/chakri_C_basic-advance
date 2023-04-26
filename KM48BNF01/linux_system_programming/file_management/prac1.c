
#include"ck.h"

int main(int argc ,char *argv[])
{
	int ck,sk,c=1,d=10,x=0,e,i=1;
	char ak[4024]={0};
	if(argc <2)
	{
		printf("command usage : cktail <file name>\n");
		_exit(0);
	}
	if(argv[1][x]=='-')
		for(i=2,x=1,d=0;argv[1][x];x++)
		{
			d=d*10;
			d=d+argv[1][x]-48;
		}
	for(e=d;argc>i;i++)
	{
		c=0;
		ck=open(argv[i],O_RDWR);
		if(ck > 0)
		{
			if(argc > 2)
			{
				printf("==> %s <==\n",argv[i]);

			}

			while(1)
			{
				sk=read(ck,ak,1);
				if(ak[0]=='\n')
					c++;
				if(sk==0)
					break;
			}
			e=c-d;
			lseek(ck,0,SEEK_SET);
			c=1;
			while(1)
			{
				sk=read(ck,ak,1);
				if(sk==0)
					break;
				if(c>=e)
				{
					write(1,ak,sk);
				}
				if(ak[0]=='\n')
					c++;
			}
		}
		if(ck < 0)
		{
			printf("==> %s <==\n",argv[i]);
			printf(" tail:error reading '%s':\n",argv[i]);
			perror("");
			continue;
		}
		close(ck);
	}
}

