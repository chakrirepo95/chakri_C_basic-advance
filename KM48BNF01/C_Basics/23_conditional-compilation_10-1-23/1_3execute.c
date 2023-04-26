/* 1)"1. Need to display different welcome messages depending on the operating system. Define the macro inside the code and compile the following into 3 different executables.
for WINDOWS : Microsoft Windows Welcomes you
for Linux : Linux Welcomes you
for Mac : Mac Welcomes you" */

#include<stdio.h>
#define m 1
int main()
{
#if m==1
	printf(" Microsoft Windows Welcomes you\n");
#elif m==2
	printf(" Linux Welcomes you\n");
#elif m==3
	printf("mac welcomes you\n");
#endif

} 
