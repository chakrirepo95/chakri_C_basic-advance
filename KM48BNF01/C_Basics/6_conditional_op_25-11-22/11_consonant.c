// 11) C program to check whether a character is vowel or consonant using switch statement

#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	//if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
//	{
		switch(c)
		{
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
			case'A':
			case'E':
			case'I':
			case'O':
			case'U':
				printf("%c is a vowel",c);
				break;
defult:
				printf("%c is a consnant",c);
		}//}
	//	else 
	//		printf("%c it is a character",c);
	
	return (0);
}

				

