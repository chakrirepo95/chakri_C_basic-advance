/* 1) implement your own string copy function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source
  note down the output and analyze the reasons .*/

#include<stdio.h>
void strcpy1(char *str,char *str1);
int main()
{
	char str[50]="chakri";
//	strcpy1("string array",str);
//	printf("%s\n",str);
	strcpy1(str,"chakri");
	printf("2 qes :%s\n",str);
	strcpy1(str,str);
	printf("3 qes :%s\n",str);
	strcpy1("chakri","sree vinay");
	return 0;
}
void strcpy1(char *d,char *s)
{
	int i=0;
	for(i=0;s[i];i++)
	{
		d[i]=s[i];
	}
	d[i]=0;
	return ;
}

