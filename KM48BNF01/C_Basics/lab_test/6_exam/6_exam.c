#include"ck.h"
int main()
{
	int total,lop,m,y,ns;
	printf("enter the values \n");
	scanf("%d%d%d%d",&total,&lop,&m,&y);
	if (total<0||m<0||y<0)
	{
		printf("invalid date");
		return 0;
	}
	else 
	{
		ns = calsal(total,lop,m,y);
		printf(" %d",ns);
	}
	return 0;
}

