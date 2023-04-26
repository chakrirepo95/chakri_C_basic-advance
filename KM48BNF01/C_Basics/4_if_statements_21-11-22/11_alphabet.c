// 11) Write a program to read a character, and print if the character is alphabet or not ( whether entered character is A to Z or a to z)


#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if (x<=64)
		printf("%c given number is not a alphabet",x);
	else if (x<=90)
		printf("%c given number is a alphabet",x);
	else if (x<=96)
		printf("%c given number is not a alphabet",x);
	else if (x<=122)
		printf("%c given number is a alphabet",x);
	else
		printf("%c given number is not a alphabet",x);
	return 0;
}


