// 3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.

#include"ck.h"
int compare(struct student, struct student );
int main()
{

	int j;
	for(j=0;j<2;j++)
	{
/*	printf("enter a ID\n");
	scanf("%d",&s[j].ID);*/
	printf("enter  a name\n");
	scanf("%s",s[j].name);
/*	printf("enter date of birth\n");
	scanf("%d%d%d",&s[j].d,&s[j].m,&s[j].y);
	printf("enter the gender\n");
	scanf(" %c",&s[j].gender);*/
	}
	if(compare(s[0],s[1]))
		printf("both structure are same");
	else
		printf("both structure are not same");
	return 0;
} 
int compare(struct student s1,struct student s2)
{
	int i;
	for(i=0;(s1.name[i]!=0||s2.name[i]!=0);i++)
	{
		if(s1.name[i]!=s2.name[i])
			return 0;
	}
	return 1;
}
	


