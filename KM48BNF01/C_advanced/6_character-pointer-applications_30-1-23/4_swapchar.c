// 4) Write a swap function to swap the values of two character variables.

#include<stdio.h>
void swap(char *d,char*s);
int main()
{
	char str,str1;
	printf("enter two characters\n");
	scanf(" %c %c",&str,&str1);
	swap(&str,&str1);
	printf("%c,%c\n",str,str1);
	return 0;
}
void swap(char *d,char *s)
{
	char temp;
	temp=*d;
	*d=*s;
	*s=temp;
	return ;
}

