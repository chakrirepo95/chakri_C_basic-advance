// 9) Define a macro to compute the length of a string ,when string is given as argument.

#include<stdio.h>
#define s(ak)  for(i=0;ak[i]!=0;i++) 
int main()
{
	int i;
	char ak[50];
	printf("enter the array\n");
	scanf("%50[^\n]s",ak);
//      for(i=0;i<n;i++) 
//	{
//		printf("enter an array element\n");
//		scanf("%d",&ak);
//	} 
	s(ak);
	printf("lenth of a string %d\n",i);
	return 0;
} 
