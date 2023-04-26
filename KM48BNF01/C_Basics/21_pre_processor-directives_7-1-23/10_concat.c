// 10) Write a macro to concatenate 2 strings. 


#include<stdio.h>
#define concat  ak[j]=sk[i];
int main()
{
	int i=0,j;
	char ak[50];
	char sk[50];
	printf("enter a first string\n");
	scanf("%50[^\n]s",ak);
	printf("enter a second string\n");
	scanf(" %50[^\n]s",sk);
	for(j=0;ak[j]!='\0';j++);
	for(i=0;sk[i]!='\0';i++,j++)
	{
		//ak[j]=sk[i];
		concat
	}
	ak[j]='\0';
	printf("%s\n",ak);
	return 0;
}
 

