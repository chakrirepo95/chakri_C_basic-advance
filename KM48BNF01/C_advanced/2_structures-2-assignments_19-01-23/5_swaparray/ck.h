#include<stdio.h>
struct student 
{
	int ID;
	char name[50];
	char gender;
	int d,m,y;
}strt[4];
void scan(struct student strt[]);

void print(struct student strt[]);
