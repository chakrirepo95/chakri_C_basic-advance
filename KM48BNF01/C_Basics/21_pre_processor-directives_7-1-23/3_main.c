// 3) Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).

#include"ck.h"
int main()
{
	int x,y;
	char c;
	printf("enter x,y values\n");
	scanf("%d%c%d",&x,&c,&y);
	switch(c)
	{
		case'+':
			printf("%d add of two numbers",add(x,y));
			break;
		case'-':
			printf("%d sub of two numbers",sub(x,y));
			break;
		case'*':
			printf("%d mul of two numbers",mul(x,y));
			break;
		case'/':
			printf("%d divi of two numbers",div(x,y));
			break;
	}
	return 0;
}
