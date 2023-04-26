// 7) char  * strcat(char d[], char s[]); // returns destination base address

#include<stdio.h>
char *strcat1(char d[],char s[]);
int main()
{
	int n;
	char s[50];
	char d[50];
	printf("enter a 1st character\n");
	scanf("%50[^\n]s",s);
	printf("enter a 2nd character\n");
	scanf(" %50[^\n]s",d);
	printf("%s\n",strcat1(d,s));
	return 0;
}

char *strcat1(char *d,char *s)
{
	char *c=s;
	for(;*(s)!='\0';s++);
	for(;*(d)!=0;)
	{
		*(s++)=*(d++);
	}
	*(s)='\0';
	return c;
}



/*char *strcat1(char *d,char *s)
{
	int i=0,j;
	char *c=s;
	for(j=0;*(s+j)!='\0';j++);
	for(i=0;*(d+i)!=0;)
	{
		*(s+j)=*(d+i);
	}
	*(s+j)='\0';
	s=c;
	return s;
}*/








































