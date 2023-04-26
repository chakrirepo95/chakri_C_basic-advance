// write a program to repeat whenever user chooses to continue by pressing y and stop when he choose n

#include<stdio.h>
int main()
{
	int a,b;
	char c = 'y';
	while (c=='y')
	{
		scanf("%d %c%d",&a,&c,&b);
		switch(c)
		{
			case'+':
				printf("%d add of two numbers",a+b);
				break;
			case'-':
				printf("%d sub of two numbers",a-b);
				break;
			case'*':
				printf("%d mul of two numbers",a*b);
				break;

			case'/':
				printf("%d divi of two numbers",a/b);
				break;
			case'%':
				printf("%d mod of two numbers",a%b);
		}
		printf("if you want to continue press y otherwise n");
		scanf(" %c",&c);
	}
	return 0;
}




