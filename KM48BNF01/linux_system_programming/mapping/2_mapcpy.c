#include"ck.h"

int main(int argc,char *argv[])
{
	int i=0,j=0,fd1=0,fd2=0;
	char *fdt1=0,*fdt2=0,tfd=0;
	if(argc !=3)
	{
		printf("command usage: ./copy < file-1> < file-2>\n");
		_exit(0);
	}

		fd1 = open(argv[1],O_RDONLY);
		fd2 = open(argv[2],O_RDWR | O_CREAT,0644);
		struct stat ck,ak;
		fstat(fd1,&ck);
		ftruncate(fd2,ck.st_size);
		fstat(fd2,&ak);
		if(ck.st_size == 0 || ak.st_size == 0)
		{
			printf("file size is zero\n");
			return 0;
		}
		fdt1 = (char *)mmap((char *)0,ck.st_size,PROT_READ,MAP_SHARED,fd1,0);
		fdt2 = (char *)mmap(NULL,ck.st_size,PROT_READ|PROT_WRITE,MAP_SHARED,fd2,0);
		if(fdt1 == NULL || fdt2 == NULL)
		{
			perror("mapping failed");
			return 0;
		}
		strcpy(fdt2,fdt1);
//		printf("%s",fdt2);
		int a = munmap(fdt1,ck.st_size);
		int b = munmap(fdt2,ak.st_size);
		if(a!=0 || b!=0)
			printf("munmap is failed\n");
		close(fd1);
		close(fd2);
}


