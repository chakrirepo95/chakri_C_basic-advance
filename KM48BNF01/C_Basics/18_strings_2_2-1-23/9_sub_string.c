// 9) matching string with substring  return its index value 
// eg:int strndex(char vrr[],char srr[]);


#include<stdio.h>
int strndex(char vrr[],char srr[]);
int main()
{
	int t,i;
	char vrr[50];
	char srr[50];
	printf("enter a first character\n");
	scanf("%50[^\n]s",vrr);
	printf("enter a second character\n");
	scanf(" %50[^\n]",srr);
	t = strndex(vrr,srr);
	if(t==-1)
		printf("matching not found \n");
	else
		printf("index of char is %d",t);
	return 0;
}

int strndex(char vrr[], char srr[])
{
	int i,j,a;
	for(i=0;vrr[i]!=0;i++)
	{
		if(vrr[i]==srr[0])
		{
			a=i;
			for(j=0;;a++,j++)
			{
				if(srr[j]==0)
				{
					return i;
				}
				else if(vrr[a]!=srr[j])
					break;
			}
		}
	}
	return -1;
}


