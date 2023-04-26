#include<stdio.h>
void strrply(char vrr[],char srr,char n);
int main()
{
	int t,i;
	char vrr[50];
	char srr;
	char n;
	printf("enter a 1st character \n");
	scanf("%50[^\n]s",vrr);
	printf("enter a 2nd character\n ");
	scanf(" %c",&srr);
	printf("enter a char to change into\n");
	scanf(" %c",&n);
	strrply(vrr,srr,n);
	printf("char after replace %s",vrr);
	return 0;
} 

void strrply(char vrr[],char srr,char n)
{
	int i;
	for(i=0;vrr[i]!='\0';i++)
	{
		if(vrr[i]==srr)
			vrr[i]=n;

	}
	return ;

}
