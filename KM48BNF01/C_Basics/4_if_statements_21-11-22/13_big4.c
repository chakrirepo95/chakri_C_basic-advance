// 13) write a program to read 4 numbers and print the biggest number.


#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b)
	{
		if (a>c)
		{
			if (a>d)
				printf("a is big %d",a);
			else
				printf("d is big %d",d);
		}
		else if (c>d)
			printf("c is bg %d",c);
		else
			printf("d is big %d",d);
			
	}
	else if (b>c)
		if (b>d)
			printf("b is big %d",b);
		else
			printf("d is big %d",d);
	else if (c>d)
		printf("c is big %d",c);
	else
		printf("d is big %d",d);  
	
	return 0;

}



