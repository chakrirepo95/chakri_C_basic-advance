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
}s;
void scan(struct student *p);
void print(struct student s);


