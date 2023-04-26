#include"ck.h"
void scan(struct student *str1,struct student *str2)
{

		printf("enter a structure\n In this order ID,NAME,GENDER,DOB\n");
		scanf("%d%s %c%d%d%d%d%s %c%d%d%d",&(*str1).ID,str1->name,&(*str1).gender,&(*str1).dob.d,&(*str1).dob.m,&(*str1).dob.y,&(*str2).ID,str2->name,&(*str2).gender,&(*str2).dob.d,&(*str2).dob.m,&(*str2).dob.y);
}

void print(struct student str1,struct student str2)
{
	struct student temp;
	temp=str1;
	str1=str2;
	str2=temp;
	printf("\nID:%d\nname : %s\ngender: %c\ndate of birth : %d%d%d\nID :%d\nname :%s\ngender : %c\ndate of birth :%d%d%d\n",str1.ID,str1.name,str1.gender,str1.dob.d,str1.dob.m,str1.dob.y,str2.ID,str2.name,str2.gender,str2.dob.d,str2.dob.m,str2.dob.y);
}

