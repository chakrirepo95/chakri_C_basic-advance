// 4) WAP to print if  a character is alphanumeric or special character, using macros.

#include<stdio.h>
#define an (c>='A' && c<='Z' ||c>='a' && c<='z'|| c>='0' && c<='9')
int main()
{
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	if(an)
		printf("%c is a character ",c);
	else 
		printf("%c is a special character ",c);
	return 0;
} 
