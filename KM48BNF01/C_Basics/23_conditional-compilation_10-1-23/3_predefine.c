// 3) experiment with the predefined macro names

#include<stdio.h>
int main()
{
	printf("%d\n",__LINE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__DATE__);
	printf("%d\n",__LINE__);
#line 50
	printf("%d\n",__LINE__);
	printf("%s\n",__FILE__);
	printf("%d\n",__STDC__);
}




