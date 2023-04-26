/* 5) implement your own string reverse function using the above swap function to swap the edges while reversing.

try calling the string reverse function using
1) string variable
2) string constant

note down the output and analyze the reasons . */ 

#include<stdio.h>
#if !defined size
#error pls enter size macro value.
#else
void swap(char *);
int main()
{
	char str[size];
	printf("enter string character\n");
	scanf("%49[^\n]s",str);
	swap(str);
	printf("%s\n",str);
	swap("chakri");
	return 0;
}
void swap(char *s)
{
	int i,j;
	for(i=0;s[i];i++);
	for(j=0,i=i-1;j<i;j++,i--)
	{

		int temp;
		temp=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=temp;
	}
	return ;
}
#endif





