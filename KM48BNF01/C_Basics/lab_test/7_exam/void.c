#include"ck.h"
void print_date_in_format(int d,int m,int y)
{
	print_subscript(d);
	print_month_name(m);
	printf("-%d",y);
}

void print_subscript(int d)
{
	if (d==1||d==21||d==31)
		printf("%dst",d);
	else if (d==2||d==22)
		printf("%dnd",d);
	else if (d==3||d==23)
		printf("%drd",d);
	else 
		printf("%dth",d);
}

void print_month_name(int m)
{
	switch(m)
	{
		case 1:printf(" january");break;
		case 2:printf(" febuary");break;
		case 3:printf(" march");break;
		case 4:printf(" april");break;
		case 5:printf(" may");break;
		case 6:printf(" june");break;
		case 7:printf(" july");break;
		case 8:printf(" august");break;
		case 9:printf(" september");break;
		case 10:printf(" october");break;
		case 11:printf(" november");break;
		case 12:printf(" december");break;
	}
}



