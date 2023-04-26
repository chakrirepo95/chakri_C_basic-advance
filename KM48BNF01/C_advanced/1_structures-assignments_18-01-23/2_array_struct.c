//  2) Create an array of structures using above template. read the data for all elements of the array. and print the topper name with highest percentage. 

#include"ck.h"
void calcul(float *per,struct student srr);
int main()
{
	struct student srr[3];
	int i,j,a;
	for(j=0;j<3;j++)
	{
	printf("enter a ID\n");
	scanf("%d",&srr[j].ID);
	printf("enter  a name\n");
	scanf("%s",srr[j].name);

	printf("enter student marks\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&srr[j].marks[i]);

	}
	printf("enter date of birth\n");
	scanf("%d%d%d",&srr[j].d,&srr[j].m,&srr[j].y);
	calcul(&srr[j].per,srr[j]);
	printf("enter the gender\n");
	scanf(" %c",&srr[j].gender);
	}
	a=0;
	for(j=0;j<3;j++)
	{
		if(srr[a].per<srr[j+1].per)
			a=j+1;
	}
	printf("\nstudent details");
	printf("\n\nID : %d\nname: %s\ndate of birth : %d-%d-%d \nper= %f \nGender : %c\n",srr[a].ID,srr[a].name,srr[a].d,srr[a].m,srr[a].y,srr[a].per,srr[a].gender);
	return 0;
		
} 

void calcul(float *per,struct student srr)

{
	int i,t=0;
	for(i=0;i<6;i++)
	{
		t=t+srr.marks[i];
	}
	*per=t/6.00;
	return ;
}

