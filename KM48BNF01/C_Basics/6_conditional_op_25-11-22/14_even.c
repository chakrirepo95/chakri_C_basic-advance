// 14) C program to check whether a number is odd or even using switch statement

#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	x=x%2;
	switch(x)
	{
		case 1:
			printf("%d is even",x);
			break;
		case 2:
			printf("%d is odd",x);
			break;
	}
	return 0;
}

