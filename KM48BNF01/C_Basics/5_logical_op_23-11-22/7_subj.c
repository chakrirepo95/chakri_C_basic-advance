/* 7) Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float g;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if ((x>=80)&&(x<=100))
		printf("%f is marks grade honours",g);
	else if ((x>=60)&&(x<=79))
		printf("%f is marks grade 1st divi",g);

	else if ((x>=50)&&(x<=59))
		printf("%f is marks grade 2nd divi",g);
	else if ((x>=40)&&(x<=49))
		printf("%f is marks grade 3rd divi",g);
	else 
		printf("%f is marks grade fail",g);
	return 0;
}

