/* 5) Write a function to determine if a character is alphanumeric or not.
Hint: int fun_alpha_num(char c). 

eg., 5
character is numeric

eg., a
character is alphabet

eg., %
character is special character */



#include"ck.h"
int main()
{
	int a;
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	a = fun_alpha_num(c);
	if (a==0)
		printf("given character is a special char %c",c);
	else if (a==1)
		printf("given character is a alphabet %c",c);
	else 
		printf("given character is a number %c",c);
	return 0;
}

