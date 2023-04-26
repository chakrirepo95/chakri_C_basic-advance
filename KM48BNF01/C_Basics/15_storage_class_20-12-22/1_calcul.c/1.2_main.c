#include"ck1.h"
extern int a,b,x;
char c;
int main()
{
	printf("enter the values \n");
	scanf("%d%c%d",&a,&c,&b);		
	switch(c)
	{
		case '+':add();printf("add of 2 num %d\n",x);break;
		case '-':sub();printf("sub of 2 num %d\n",x);break;
		case '*':mul();printf("mul of 2 num %d\n",x);break;
		case '/':div();printf("div of 2 num %d\n",x);break;
		case '%':mod();printf("mod of 2 num %d\n",x);break;
	}
	return 0;
}


