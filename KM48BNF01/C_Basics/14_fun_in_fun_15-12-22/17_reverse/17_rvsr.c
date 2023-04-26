#include"ck.h"
char rchar(char c)
{
	if ( c>='a' && c<='z')
		return c-32;
	else if(c>='A' && c<='Z')
		return c+32;
	else
		return c;
}


