// 9) Write the calculator program to read 2 numbers and one of the characters +,-,*,/ or % in a loop, and print the output as long as the user is entering valid characters. If the user enters invalid character for the operation, then stop the program. 

#include<stdio.h>
int main()
{
	int a,b;
	char c;
	while(1)
	{
		printf("enter int ,char ,int");
		scanf("%d %c%d",&a,&c,&b);
		switch(c)
		{
			case'+':printf("%d",a+b);
				break;
			case'-':printf("%d",a-b);
				break;
			case'*':printf("%d",a*b);
				break;
			case'/':printf("%d",a/b);
				break;
			case'%':printf("%d",a%b);
				break;
			default:goto exit;
		}
	}
exit:
	return 0;
}


