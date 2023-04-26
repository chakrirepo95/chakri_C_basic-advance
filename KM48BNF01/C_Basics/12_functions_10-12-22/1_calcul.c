/* 1) Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int);
int sub (int, int); */

#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
int main()
{
	int a,b,x;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case'+':x=add(a,b);printf("%d",x);break;
		case'-':x=sub(a,b);printf("%d",x);break;
        	case'*':x=mul(a,b);printf("%d",x);break;
        	case'/':x=div(a,b);printf("%d",x);break;
        	case'%':x=mod(a,b);printf("%d",x);break;
	}
			return 0;
	
}
	int add(int a,int b)
	{
		int x;
		x=a+b;
		return x;
	}
        int sub(int a,int b)
	{
        	int x;
		x=a-b;
		return x;
	}
        int mul(int a,int b)
	{
        	int x;
		x=a*b;
		return x;
	}
        int div(int a,int b)
	{
        	int x;
		x=a/b;
		return x;
	}
        int mod(int a,int b)
	{
        	int x;
		x=a%b;
		return x;
	}











