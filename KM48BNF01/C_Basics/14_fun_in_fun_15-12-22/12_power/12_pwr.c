#include"ck.h"
int power(int a, int p)
{
        int i,n=1;
        for (i=1;i<=p;i++)
                n=n*a;
        return n;
}
 
