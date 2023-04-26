#include"ck.h"
void scan(struct student std[])
{
	int i;
	for(i=0;i<4;i++)
	{
	printf("enter a ID,NAME,GENDER,DOB\n");
	scanf("%d%s %c%d%d%d",&std[i].ID,std[i].name,&std[i].gender,&std[i].dob.d,&std[i].dob.m,&std[i].dob.y);
	}
}


void print(struct student std[])
{
	int i;
	printf("\nstudent details\n");
	for(i=0;i<4;i++)
	{
	printf("ID :%d\nname: %s\nGender : %c\ndate of birth :%d-%d-%d\n",std[i].ID,std[i].name,std[i].gender,std[i].dob.d,std[i].dob.m,std[i].dob.y);
	}
}


