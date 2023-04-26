/* 7) "Write a function to accept a character as input, return the upper case character, if the given character is a lower case alphabet, otherwise return the character as it is.
char CaseReverse(char );" */

#include<stdio.h>
char rchar(char c);
int main()
{
	char c;
	printf("enter a character: ");
	scanf("%c",&c);
       	rchar(c);
	printf("given character in reverse %c ",rchar(c));
	return 0;
}
char rchar(char c)
{
	if ( c>='a' && c<='z')
		return c-32;
	else if(c>='A' && c<='Z')
		return c+32;
	else
		return c;
}


