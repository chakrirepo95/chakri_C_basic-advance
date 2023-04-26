// 7)compare the string with n value * int strcmp(char vrr[],char srr[],int n);



#include<stdio.h>
int strcmp1(char vrr[],char srr[],int n);
int main()
{
	int t,n;
	char vrr[50];
	char srr[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",vrr);
	printf("enter a second character\n");
	scanf(" %50[^\n]",srr);
	printf("enter a n for count\n");
	scanf("%d",&n);
	t = strcmp1(vrr,srr,n);
	if(t==0)
		printf("both are equal\n");
	if(t<0)
		printf(" first is smaller than second \n");
	if(t>0)
		printf(" first is bigger than second \n");
	return 0;
} 

int strcmp1(char vrr[],char srr[],int n)
{
	int i,j;
	for(i=0;i<n;i++,j++)
	{
		if(!((vrr[i]==srr[i]+32)||(vrr[i]+32==srr[i])) && (vrr[i]!=srr[i]))
			return(vrr[i]-srr[i]);
	}
	return 0;

}
