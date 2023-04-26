//  6) int stricmp (char s1[], char s2[]);

#include<stdio.h>
int stricmp(char s1[],char s2[]);
int main()
{
	int t;
	char s1[50];
	char s2[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",s1);
	printf("enter a second character\n");
	scanf(" %50[^\n]",s2);
	t = stricmp(s1,s2);
	if(t==0)
		printf("both are equal\n");
	if(t<0)
		printf(" first is smaller than second \n");
	if(t>0)
		printf(" first is bigger than second \n");
	return 0;
} 

int stricmp(char *s1,char *s2)
{
	int i;
	for(i=0;*(s1)!='\0';s1++)
	{
		if(!((*(s1)==*(s2)+32)||(*(s1)+32==*(s2))) && (*(s1)!=*(s2)))
			return(*(s1)-*(s2));
	}
	return 0;

}


