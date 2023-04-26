/*3) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
 * eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
 * output : kerraaya*/

#include<stdio.h>
#include<stdlib.h>
char * concat(char *str1,char *str2,int a,int n);
int main()
{
	int n,m;
	char *str1,*str2,*cat;
	printf("enter str1 and str2 sizes\n");
	scanf("%d ",&m);
	str1=(char*)malloc(m);
	scanf("%d",&m);
	str2=(char*)malloc(m);
	printf("enter str1 and str2 characters\n");
	scanf("%49[^\n]s",str1);
	scanf(" %49[^\n]s",str2);
	printf("enter m and n values\n");
	scanf("%d%d",&m,&n);
	cat=concat(str1,str2,m,n);
	printf("%s\n",cat);
	return 0;
}
char * concat(char *str1,char *str2,int a,int n)
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

