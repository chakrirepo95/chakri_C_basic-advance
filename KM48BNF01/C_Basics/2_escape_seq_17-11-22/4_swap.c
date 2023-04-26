/* 4) Read 2 variable values and swap their values (exchange) and print back.

eg., input 4 5  (stored in a, b)

output : 5 4  ( print a and b)*/

#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter x and y values\n");
	scanf("%d%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("%d %d",x,y);
	return 0;
}
