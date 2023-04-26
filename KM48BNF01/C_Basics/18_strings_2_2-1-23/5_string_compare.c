#include<stdio.h>
int strcmp(char vrr[],char srr[]);
int main()
{
	int t;
	char vrr[50];
	char srr[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",vrr);
	printf("enter a second character\n");
	scanf(" %50[^\n]",srr);
	t = strcmp(vrr,srr);
	if(t==0)
		printf("both are equal\n");
	if(t<0)
		printf(" first is smaller than second \n");
	if(t>0)
		printf(" first is bigger than second \n");
	return 0;
} 

int strcmp(char vrr[],char srr[])
{
	int i;
	for(i=0;vrr[i]!='\0';i++)
	{
		if(vrr[i]!=srr[i])
			return(vrr[i]-srr[i]);
	}
	return 0;

}

