/*1) int strlen( char str[]);
returns the length of the string.

Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
} */

#include<stdio.h>
int string(char arr[]); // int n);
int main()
{
//	int n;
	int m;
//	printf("enter a n values\n");
//	scanf("%d",&n);
	char arr[20];  //arr[n];
	m=string(arr); //(arr,n);
	printf("%d ",m);
	return 0;
}

int string(char arr[]) //(int n)
{
	int i=0;
	printf("enter a character \n");
	scanf("%20s",arr);
	for(i=0;arr[i]!='\0';i++);
//	for(i=0;arr[i]!='\0' && i<n;i++);
	return i;
}




