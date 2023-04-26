/* 3) Implement your own string concatenation function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source

note down the output and analyze the reasons. */

#include<stdio.h>
void strcat1(char *d,char *s);
int main()
{
	char str[50]="chakri";
	char str1[50]="sree";
//	strcat1("sree",str);
	strcat1(str,"sree");
	printf("2 qes :%s\n",str);
	strcat1(str,str1);
	printf("3 qes :%s\n",str);
	strcat1("chakri","sree");
	return 0;
}
void strcat1(char *d,char *s)
{
	int i=0,j=0;
	for(i=0;d[i];i++);
	for(j=0;d[i]=s[j];j++,i++);
	return;
}


