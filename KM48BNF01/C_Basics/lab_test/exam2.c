#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the subjects");
	scanf("%d%d%d",&a,&b,&c);
	if ((a>=60)&&(b>=50)&&(c>=40)&&(a+b+c>=200)||(a+b>=150))
		printf("the candidate is eligible");
	else 
		printf("the candidate is not eligible");
	return 0;
}


