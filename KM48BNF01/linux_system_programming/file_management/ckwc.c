// 5. Write a system programming your own version of wc command?


#include"ck.h"

int main (int argc ,char * argv[])
{
	int i,ck,sk,a=0,c=0,b=0,x=0,y=0,z=0;
	char vp=0,ak[4024]={0},ss=0;
	if(argc < 2)
	{
		printf("command usage: ckwc <file name>\n");
		_exit(0);
	}
	for(i=1;argc>i;i++)
	{
		c=0;a=0;b=0;vp=' ';
		ck =open(argv[i],O_RDWR);
		if(ck>0)
		{
			while(1)
			{
				sk=read(ck,ak,1);
				if(sk==0)
					break;
				if(ak[0]=='\n')
					c++;
				if((ak[0]==' ' && vp!=' ' && vp!='*' && ss!='/')|| (ak[0]=='\n' && vp!='\n' && vp!=' ')||((ak[0]=='*' || ak[0]=='/') && vp=='/'))
				{
					a++;
				}
				ss=vp;
				vp=ak[0];
				b++;
			}
		}
		if(ck<0) 	
		{
			printf("==> %s <== \n",argv[i]);
			printf(" wc:error reading '%s':\n",argv[i]);
			perror("");
			continue;
		}
		close(ck);
		printf(" %d\t %d\t %d\t %s\n",c,a,b,argv[i]);
		x+=c;y+=a;z+=b;
	}
	if(argc > 2)
		printf(" %d\t %d\t %d\t total \n",x,y,z);
}
