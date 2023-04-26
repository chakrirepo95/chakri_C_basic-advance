#include<stdio.h>
#include<unistd.h>

int main()
{
	int i;
	i=syscall(2);
	printf("%d\n", i);
}
