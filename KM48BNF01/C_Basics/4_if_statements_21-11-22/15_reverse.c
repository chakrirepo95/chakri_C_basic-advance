/* 15) Input an alphabet. Output its case reverse.
eg1., input: a
output: A
eg2:
input: A
output: a*/



#include<stdio.h>
int main ()
{
	char x;
	scanf("%c",&x);
	if (x<=64)
	      	printf("%c is a invalid",x);
	else if (x<=90)
		printf("%c is a reverse",x+32);
	else if (x<=96) 
		printf("%c is a invalid",x);
	else if (x<=122)
		printf("%c is a reverse",x-32);
else
		printf("%c is a invalid",x);
return 0;
}

