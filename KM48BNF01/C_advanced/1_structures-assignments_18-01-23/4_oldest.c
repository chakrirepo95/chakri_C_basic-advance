/* 4) write a function to take the array of structures as argument and return the structure element with oldest date of birth.

return the structure variable using return statement and array element with index. Return type of the function will be struct student.

eg.,struct student oldeststudent(struct student arr[])
{ 

return arr[i]; // find the index at which date of  birth is oldest using date comparison function
}*/

#include<stdio.h>
struct student 
{
	int d,m,y;
}arr[4],a;
struct student os(struct student arr[]);
int main()
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("enter the date,month,year\n");
		scanf("%d%d%d",&arr[i].d,&arr[i].m,&arr[i].y);
	}
	a=os(arr);
	printf("%d-%d-%d is the oldest ",a.d,a.m,a.y);
return 0;
}

struct student os(struct student arr[])
{
		int i=0,a=arr[0].d,b=arr[0].m,c=arr[0].y,t=0;
	for(i=0;i<4;i++)
	{
		if((a>arr[i].d&&b==arr[i].m&&c==arr[i].y)||(b>arr[i].m&&c==arr[i].y)||(c>arr[i].y))
			a=arr[i].d,b=arr[i].m,c=arr[i].y;t=i;
	}
	return arr[t];
}

