//9)check if a character is vowel or not

#include<stdio.h>
int main()
{
	char c;
	printf("enter char value\n");
	scanf("%c",&c);
	(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U')||(c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')?printf("%c is vowel\n",c):printf("%c is not a vowel\n",c);
	return 0;
}



