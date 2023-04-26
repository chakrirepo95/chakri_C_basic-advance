/* 1) Rewrite the calculator program so that the main function is in main.c , remaining functions are in another source code file ,operations.c.
1 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.
2 ) Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.*/
#include"ck.h"
extern int a,b,x;
char c;
int main()
{
	printf("enter the values \n");
	scanf("%d%c%d",&a,&c,&b);		
	switch(c)
	{
		case '+':printf("add of 2 num %d\n",add());break;
		case '-':printf("sub of 2 num %d\n",sub());break;
		case '*':printf("mul of 2 num %d\n",mul());break;
		case '/':printf("div of 2 num %d\n",div());break;
		case '%':printf("mod of 2 num %d\n",mod());break;
	}
	return 0;
}


