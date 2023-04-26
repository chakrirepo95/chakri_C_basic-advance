// 5) C program to find maximum of two numbers using switch statement


#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 0:
			printf("b is maxi number %d",b);
			break;
		case 1:
			printf("a is maxi number %d",a);
			break;
	}
	return 0;
}


