// 1) create an alias name for the structure and start using it. also create date of birth and date of joining as nested structure type members.


#include"ck.h"
int main()
{
	ss std;
	printf("enter a ID\n");
	scanf("%d",&std.ID);
	printf("enter  a name\n");
	scanf("%s",std.name);
	printf("enter date of birth\n");
	scanf("%d%d%d",&std.dob.d,&std.dob.m,&std.dob.y);
	printf("enter date of joining\n");
	scanf("%d%d%d",&std.doj.d,&std.doj.m,&std.doj.y);
	printf("enter the gender\n");
	scanf(" %c",&std.gender);
	printf("\nstudent details");
	printf("\n\nID : %d\nname: %s\ndate of birth : %d-%d-%d\ndate of joining :%d-%d-%d\nGender : %c\n",std.ID,std.name,std.dob.d,std.dob.m,std.dob.y,std.doj.d,std.dob.m,std.doj.y,std.gender);
	return 0;
		
} 


