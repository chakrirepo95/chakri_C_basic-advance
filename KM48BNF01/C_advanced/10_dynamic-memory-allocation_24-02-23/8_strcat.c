// 8) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=0,m=0,i,a=0;
	char *str1,*str2,*cat;
	printf("enter str1 and str2 sizes\n");
	scanf("%d",&m);
	str1=(char*)malloc(m);
	scanf("%d",&n);
	str2=(char*)malloc(n);
	printf("enter str1 and str2 characters\n");
	scanf("%49[^\n]s",str1);
	scanf(" %49[^\n]s",str2);
	a = m+n;
	str1=(char *)realloc(str1,a*sizeof(char *));
	for(i=0;i<a;i++)
	{
		str1[m+i]=str2[i];
	}
	str1='\0';
/*	printf("enter m and n values\n");
	scanf("%d %d",&m,&n);
	cat=concat(str1,str2,m,n);*/
	printf("%s\n",str1);
	return 0;
}




















































/* char * concat(char *str1,char *str2,int a,int n)
{
	char *str=(char *)malloc(a*n+1);
	int i,j;
	for( i=0;i<a;i++)
	{
		str[i]=str1[i];
	}

	for(j=0;j<n;j++,i++)
	{

		str[i]=str2[j];
	}
	str[i]=0;
	return str;
}
*/
