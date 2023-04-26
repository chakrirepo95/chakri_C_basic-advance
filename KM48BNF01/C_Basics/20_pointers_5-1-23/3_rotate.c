// 3) Write a function that can rotate the values of three variables. print the results in main function.
 
#include<stdio.h>
void rotate(int *a,int *b,int*c);
int main()
{
	int a,b,c;
	printf("enter 3 values\n");
	scanf("%d%d%d",&a,&b,&c);
	rotate(&a,&b,&c);
	printf("rotation 1:%d %d %d\n",a,b,c);
	rotate(&a,&b,&c);
	printf("rotation 2:%d %d %d\n",a,b,c);
	rotate(&a,&b,&c);
	printf("rotation 3:%d %d %d\n",a,b,c);
	return 0;
} 

void rotate(int *a,int *b,int*c)
{
	int p;
	p=*a;
	*a=*b;
	*b=*c;
	*c=p;
	return ;
}

