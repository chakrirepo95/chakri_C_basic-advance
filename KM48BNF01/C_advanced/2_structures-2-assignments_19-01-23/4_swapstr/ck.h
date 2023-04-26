#include<stdio.h>
struct student 
{
	int ID;
	char name[50];
	char gender;
	struct date
	{
	int d,m,y;
	}dob;
}str1,str2;
void scan(struct student *str1,struct student *str2);

void print(struct student str1,struct student str2);
