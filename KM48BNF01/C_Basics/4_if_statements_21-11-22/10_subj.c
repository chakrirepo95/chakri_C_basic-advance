/* 10) Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,x;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	x = (a+b+c+d+e+f)/6;
	if (x<=39)
		printf("result of student is fail %d",x);
	else if (x<=49)
		printf("result of student is 3rd division %d",x);
	else if (x<=59)
		printf("result of student is 2nd division %d",x);
	else if (x<=79)
		printf("result of student is 1 st division %d",x);
	else 
		printf("result of student of honours %d",x);
	return 0;
}


	
