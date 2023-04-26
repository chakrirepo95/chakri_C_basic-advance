// 6)Input an alphabet. Output its case reverse.

#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	((c>=65)&&(c<=90))?printf("%c",c+32):((c>=97)&&(c<=122))?printf("%c",c-32):printf("invalid");
	return 0;
}

