// 3. Write a system programming your own version of echo command?

#include"ck.h"

int main(int argc ,char *argv[])
{

	int i;
	for(i=1;argc>i;i++)
	{
		printf("%s\n",argv[i]);
	}
}
