// write a program to read n numbers from key board till the user enter a -ve number add all the positive numbers entered and print the sum of the numbers and how many numbers were entered


#include<stdio.h>
int main()
{
	int i=0,s=0;
	while (i>=0)
	{
		s+=i;
		scanf("%d",&i);
	}
	printf("%d sum of all numbers\n",s);
	return 0;
}


