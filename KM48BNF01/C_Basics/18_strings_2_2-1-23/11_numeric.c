// 11) given string is numeric string or not.

#include<stdio.h>
int numeric(char ak[]);
int main()
{
	char ak[50];
	int c;
	printf("enter string value\n");
	scanf("%50[^\n]s",ak);
	c=numeric(ak);
	if(c>=0)
		printf(" string is numeric string");
	else
		printf(" string is not a numeric string");
	return 0;
}
int numeric(char ak[])
{
	int i;
	for(i=0;ak[i]!=0;i++)
	{
		if((ak[i]<'0')||(ak[i]>'9'))
			return -1;
	}
	return i;
}
 
