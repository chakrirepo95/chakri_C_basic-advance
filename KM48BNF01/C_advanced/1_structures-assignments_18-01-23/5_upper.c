// 5) Write a function to take an array of structures as argument, and convert all their names into capital letters( strupr implementation). print the data in main function.

#include<stdio.h>
struct student
{
	char name [50];
}ch;
void upper(struct student);
int main()
{
	printf("enter a name\n");
	scanf("%s",ch.name);
	upper(ch);
	return 0;
}
void upper(struct student ch)
{
	int i;
	for(i=0;ch.name[i]!='\0';i++)
	{
		if(ch.name[i]>='a'&&ch.name[i]<='z')
		{
		ch.name[i]=ch.name[i]-32;
		}
	}
	printf("%s",ch.name);
}
