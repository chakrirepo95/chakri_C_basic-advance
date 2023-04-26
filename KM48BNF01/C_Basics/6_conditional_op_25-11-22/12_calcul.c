// 12) Write the calculator program using switch case statement.
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%c%d%d",&c,&a,&b);
	if ((c=='+')||(c=='-')||(c=='*')||(c=='/')||(c=='%'))
	switch(c)
	{
	case'+':
		printf("%d addition of two numbers",a+b);
		break;
	case'-':
		printf("%d subtraction of two numbers",a-b);
		break;
	case'*':
		printf("%d mul of two numbers",a*b);
		break;
	case'/':
		printf("%d divi of two numbers",a/b);
		break;
	case'%':
		printf("%d mod of two numbers",a%b);
		break;
	}
		return 0;
}
