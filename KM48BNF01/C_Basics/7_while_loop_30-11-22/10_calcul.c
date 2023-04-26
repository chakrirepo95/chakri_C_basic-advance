// 10) write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operation on numbers and print the output. Modify the program to repeat this task n number of times.


#include<stdio.h>
int main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		int a,b;
		char c;
		scanf(" %c%d%d",&c,&a,&b);
		switch(c)
		{
			case'+':
				printf("add of two num %d\n",a+b);
				break;

			case'-':
				printf("sub of two num %d\n",a-b);
				break;
			case'*':
				printf("mul of two num %d\n",a*b);
				break;
			case'/':
				printf("divi of two num %d\n",a/b);
				break;
			case'%':
				printf("mod of two num %d\n",a%b);
				break;
		}
		i++;
	}
	return 0;
}
