/* 6) void strrev( char str[]);

//reverse the string (without using any extra array)

eg., input : str[] = "Kernel";

output : str[] = "lenreK"  */

#include<stdio.h>
void reverse(char arr[]);
int main()
{

	char arr[50];
	printf("enter a string to print reverse\n");
	scanf("%50[^\n]s",arr);
	reverse(arr);
	printf("%s",arr);
	return 0;
}

void reverse(char arr[])
{
	int i=0,j,temp;
	for(i=0;arr[i]!='\0';i++);
	for (j=i-1,i=0;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}


