#include"ck.h"

int main(int argc,char *argv[])
{
	int fd=0,i=0;
	char *fdt=0,*tfd=0;
	if(argc < 2)
	{
		printf("command usage : enter atleat one file\n");
		return 0;
	}
	for(i=1;argc>i;i++)
	{
		fd = open(argv[i],O_RDONLY);
		struct stat ck;
		fstat(fd,&ck);
		if(ck.st_size == 0)
		{
			printf("file size is zero");
			return 0;
		}
		fdt = (char *)mmap((char *)0,ck.st_size,PROT_READ,MAP_SHARED,fd,0);
		if(fdt == NULL)
		{
			perror("mapping failed");
			return 0;
		}
		tfd = fdt;
		printf("%s",fdt);
	int a = munmap(fdt,ck.st_size);
	if(a!=0)
		printf("munmap is failed\n");
	}
}
