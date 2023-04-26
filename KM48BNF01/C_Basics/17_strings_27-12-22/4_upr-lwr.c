// 4)  void strlwr( char str[]);
// convert all upper case alphabets to lower case in the given string

#include<stdio.h>
void upper(char arr[]);
int main()
{
	char arr[50];
	printf("enter a charater\n");
	scanf("%50[^\n]s",arr);
	upper(arr);
	printf("%s",arr);
	return 0;
}

void upper(char arr[])
{
	int i=0;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>='A' && arr[i]<='Z')
			arr[i]=arr[i]+32;
	}
}



