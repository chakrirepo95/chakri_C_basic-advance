// 4. Write a system programming your own version of head command? 

#include "ck.h" 

int main (int argc ,char * argv[]) 
{ 	
	int ck,sk,c=1,d=10,i=1,a; 	
	char ak[4024]={0};
	if(argc < 2)
	{
		printf("command usage : ckhead <file name>");
		_exit(0);
	}
	if(argv[1][0]=='-')
		for(i=2,a=1,d=0;argv[1][a];a++)
		{
			d=d*10;
			d=d+argv[1][a]-48;
		}
	for(;argc>i;i++)
	{
		c=1;
		ck = open (argv[i],O_RDWR); 	
		if(ck > 0) 	
		{
			if(argc > 2)
			{
				printf("==> %s <== \n",argv[i]);
			}
			while(1)
			{
				sk=read(ck,ak,1);
				if(ak[0]=='\n')
					c++;
				if(c > d)
					break;
				if(sk==0)
					break;	 
				write(1,ak,sk);
			}
			printf("\n");
		}
			if(ck<0) 	
			{
				printf("==> %s <== \n",argv[i]);
				printf(" head:error reading '%s':\n",argv[i]);
				perror("");
				continue;			
			}
			close(ck);
	}	
}




