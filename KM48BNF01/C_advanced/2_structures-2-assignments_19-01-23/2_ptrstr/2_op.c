#include"ck.h"

void scan(struct student *p)
{
	printf("enter a ID,NAME,GENDER,DOB\n");
	scanf("%d%s %c%d%d%d",&(*p).ID,p->name,&(*p).gender,&(*p).dob.d,&(*p).dob.m,&(*p).dob.y);
}


void print(struct student s)
{
	printf("\nstudent details\n");
	printf("ID :%d\nname: %s\nGender : %c\ndate of birth :%d-%d-%d\n",s.ID,s.name,s.gender,s.dob.d,s.dob.m,s.dob.y);

}


