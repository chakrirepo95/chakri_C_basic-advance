// 8) Write a program to read a character, and print if the character is alphabet or not ( whether entered character is A to Z or a to z)

#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if ((x>=65 && x<=90)||(x>=97 && x<=122))
		printf("%c givin char is alpha",x);
	else 
		printf("%c given char is not alpha",x);
	return 0;
}
