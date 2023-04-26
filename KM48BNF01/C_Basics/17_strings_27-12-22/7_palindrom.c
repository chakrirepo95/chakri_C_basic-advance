// 7) int palindrome (char str[])

// return 1 if the given string is a palindrome, return 0 if it is not a palindrome

#include<stdio.h>
int palindrome(char arr[]);
int main()
{
	int t;
	char arr[50];
	printf("enter a number \n");
	scanf("%50[^\n]s",arr);
	t=palindrome(arr);
	if (t==0)
		printf("it is not a palindrome\n");
	else 
		printf("it is a palindrome\n");
	return 0;
}

int palindrome(char arr[])
{
	int i,j;
	for(i=0;arr[i]!='\0';i++);
	for(--i,j=0;j<i;j++,i--)
		if(arr[i]!=arr[j])
			return 0;
	return 1;
}
	


		




