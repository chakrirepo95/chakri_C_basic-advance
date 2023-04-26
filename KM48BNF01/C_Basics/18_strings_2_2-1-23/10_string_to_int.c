//10)convert integer char string into integer. eg:int chrint(char srr[],int i);

#include<stdio.h>
int chrint(char srr[],int i);
int main()
{
	int t,i;
	char srr[50];
	printf("enter a first character\n");
	scanf(" %50[^\n]",srr);
	t = chrint(srr,i);
		printf("%d integer value is ",t);
	return 0;
}

int chrint(char srr[],int i)
{
	int a,p=0;
	for(a=0;srr[a]!=0;a++)
	{
		p=p*10;
		printf("%d\n",srr[a]);
		p=p+(srr[a]-48);
	}
	return p;
}
	







	
























