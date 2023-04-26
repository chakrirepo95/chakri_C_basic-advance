// 2) Read n characters from user, and print if each character is vowel or not.

#include<stdio.h>
int main ()
{
	int i=0,n=10;
	char c;
	while (i<n)
	{
		printf("please enter the chracter:");	
		scanf(" %c",&c);
		if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
		{
			printf("%c is a vowel\n",c);
		}
		else
		{
			printf("%c is not a vowel\n",c);
		}
		i++;
	}
	return 0;
}
