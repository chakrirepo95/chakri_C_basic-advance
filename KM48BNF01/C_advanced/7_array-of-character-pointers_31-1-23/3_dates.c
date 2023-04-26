/*3)  read a date in d-m-y format and print it back in given format below:
 *
 * eg input :2-3-2000
 * output: 2nd March, 2000
 *
 * eg input: 4-1-2001
 * output: 4th January, 2001*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d,m,y;
	char *str[12]={"january","february","march","april","may","june","july","augest","september","october","november","december"};
	char *str1[31]={0};
	str1[0]="st";str1[20]="st";str1[30]="st";str1[1]="nd";str1[21]="nd";str1[22]="rd";str1[2]="rd";
	printf("enter a day,month,year\n");
	scanf("%d%d%d",&d,&m,&y);
	if(str1[d-1]==NULL)
		str1[d-1]="th";
	printf("%d%s %s %d\n",d,str1[d-1],str[m-1],y);
	return 0;
}

