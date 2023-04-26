// 8) int strchr( char str[], char ch)
// search the character ch ,in string str , whenever the first matching occurs, return the matching index. 


#include<stdio.h>
int strchr1(char arr[], char srr);
int main()
{
	int t;
	char arr[50];
	char srr;
	printf("enter a string\n");
	scanf("%50[^\n]s",arr);
	printf("enter a character\n");
	scanf("%s",& srr);
	t = strchr1(arr,srr);
	if(t==0)
		printf("matching not found \n");
	else 
		printf("index of char is %d",t);
	return 0;
}

int strchr1( char arr[], char srr)
{
	int i;
	for(i=0;arr[i]!='\0';i++)
	{
		if(!(arr[i]!=srr))
			return i;
	}
	return 0;
}
