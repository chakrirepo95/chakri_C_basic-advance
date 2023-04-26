/* 1)  "Write a trim() function,that will remove the leading and trailing spaces from a string.
eg., Input : ""    str  str   ""
Output : ""str str""" */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void trim(char *ck);
int main()
{
	int i=0,a=0,j=0,n;
	char ck[50]={0};
	printf("enter the string\n");
	scanf("%[^\n]49s",ck);
         trim(ck);
	printf("%s\n",ck);
	return 0;
}

void trim(char *ck)
{
	int i=0,j=0;
	for(i=0;ck[i];i++)
	{
		if(ck[i]==' ')
		{
			for(j=i;ck[j];j++)
				ck[j]=ck[j+1];     //	mine  ck[i+1]='\b'; 			
			if(ck[i]!=' ')            // mine  (ck[i+1]==' '==ck[i+1]);
			break;
			i--;
		}
	}
	for(i=j;;i--)      // for(i=j-2;ck[i];i--)
	{
		if(ck[i]==' ')
		{
			for(j=i;ck[j];j++)
				ck[j]=ck[j+1];
			if(ck[i-1]!=' ')
				break;
		}
	}
}



