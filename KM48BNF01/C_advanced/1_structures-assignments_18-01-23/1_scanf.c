/* 1) Practice scanf and printf on each member of the structure using a structure variable  using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).*/

#include"ck.h"
void calcul(float *per,int marks[]);
int main()
{
	int i;
	printf("enter a ID\n");
	scanf("%d",&v1.ID);
	printf("enter  a name\n");
	scanf("%s",v1.name);
	printf("enter student marks\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&v1.marks[i]);

	}
	printf("enter date of birth\n");
	scanf("%d%d%d",&v1.d,&v1.m,&v1.y);
	calcul(&v1.per,v1.marks);
	printf("enter the gender\n");
	scanf(" %c",&v1.gender);
	printf("\nstudent details");
	printf("\n\nID : %d\nname: %s\ndate of birth : %d-%d-%d \nper= %f \nGender : %c\n",v1.ID,v1.name,v1.d,v1.m,v1.y,v1.per,v1.gender);
	return 0;
		
} 

void calcul(float *per,int marks[])

{
	int i,t=0;
	for(i=0;i<6;i++)
	{
		t=t+v1.marks[i];
	}
	*per=t/6.00;
	return ;
}











