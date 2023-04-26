//1)Create a character pointer array, initialise the pointers to read only strings. Sort the array and print.



#include<stdio.h>
#include<string.h>
int main()
{
	char *str[12]={"jan","feb","march","aprl","may","june","july","aug","sep","oct","nov","dec"};
	int i=0,j=0;
	for(i=0;i<12-1;i++)
	{
		for(j=0;j<12-i-1;j++)
		{
			if(strcmp(str[j],str[j+1])>0)
			{
				char *tem=str[j];
				str[j]=str[j+1];
				str[j+1]=tem;
			}
		}
	}
	for(i=0;i<12;i++)
	printf("%s\n",str[i]);
}

