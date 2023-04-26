/* 11) Input an alphabet. Output its case reverse.
eg1., input: a
output: A
eg2:
input: A
output: a*/




#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	if ((x>=65)&&(x<=90))
		printf("%c is a reverse of %c",x,x+32);
	else if ((x>=97)&&(x<=122))
		printf("%c is reverse of %c",x,x-32);
	else 
		printf("invalid char");
	return 0;
}

