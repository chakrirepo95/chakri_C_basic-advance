// 6) Count and print how many girls and how many boys are there in the class.

#include<stdio.h>
struct student 
{
	int ID;
	char name[50];
	char gender;
};
int main()
{
	int i,n,c=0,c1=0;
	printf("enter a n value\n");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter a ID,name,gender\n");
		scanf("%d%s %c",&s[i].ID,s[i].name,&s[i].gender);
		if(s[i].gender=='m')
			c++;
		else if (s[i].gender=='f')
			c1++;
	}
	printf("boys are :%d\ngirls are :%d",c,c1);
	return 0;
}



