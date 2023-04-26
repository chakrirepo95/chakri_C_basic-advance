// 8) find no.of words in string int no of words(char s[]);


#include<stdio.h>
int words(char vrr[]);
int main()
{
	int t;
	char vrr[50];
	printf("enter a string \n");
	scanf("%50[^\n]s",vrr);
	t=words(vrr);
	printf("In this string %d words are there\n",t);
	return 0;
}

int words(char vrr[])
{
	int i,j=0;
	for(i=0;vrr[i]!=0;i++)
	{
		if(!(vrr[i]!=' ')&& !(vrr[i+1]==' ')&& !(vrr[i+1]==0))
			++j;
	}
	return ++j;
}
	
	
