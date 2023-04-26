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
}std[4];
void scan(struct student std[]);
void print(struct student std[]);


