// 5) void strupr (char str[]);
// convert all lower case alphabets to upper case in the given string

#include<stdio.h>
void lower(char arr[]);
int main()
{
	char arr[50];
	printf("enter a charater\n");
	scanf("%50[^\n]s",arr);
	lower(arr);
	printf("%s",arr);
	return 0;
}

void lower(char arr[])
{
	int i=0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>='a' && arr[i]<='z')
			arr[i]=arr[i]-32;
	}
}


