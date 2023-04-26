// 7) try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference./


#include<stdio.h>
#define size(m) printf("%lu\n",((char *)(&m+1)-(char *)(&m)))
void size1(char *);
int main()
{
	char str[10]="chakri";
	char str1[10]={'c','h','a'};
	char *str2=str1;
	size1(str2);
	size1(str);
	size1(str1);
	str2="cha";
	size1(str2);
	printf("%p\n","rvp");
}
void size1(char *str)
{
	size(str);
	return ;
}




