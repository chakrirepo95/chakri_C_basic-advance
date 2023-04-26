// 8)check if a character is alphabet or not

#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	(((c>='A')&&(c<='Z')||(c>='a')&&(c<='z'))) ? printf(" is a alphabet"): printf(" is not a alphabet ");
	return 0;
}

