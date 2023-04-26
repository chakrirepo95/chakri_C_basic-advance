/* 2) Complete the lab test question as an assignment by adding conditional statement, so that to print a denomination only if the denomination is not zero. Do not print 0 denominations.
If the amount entered is not divisible with 50 (not in multiples of 50) then print a message that the money cannot be dispensed as input is not valid.

At an ATM the denominations available are 2000/- , 500/- , 200/-, 100/-, 50/-

Program will take the amount to withdraw as an input. And will calculate and display the number of notes of each denomination to be dispensed. The amount should be entered as denominations of 50/- only. (Hint: Make use of / and % operators)


eg., Enter the amount to withdraw: 12950

Output expected:

Money dispensed as follows:

No of 2000/- notes: 6

No of 500/- notes: 1

No of 200/- notes: 2

No of 50/- notes: 1

eg., Enter the amount to withdraw: 57260

Output expected :

Amount not valid. Please enter amount only multiples of 50.*/

#include<stdio.h>
int main ()
{
	int x,a,b,c,d,e,f,g,h,i,j;
	scanf("%d",&x);
        a = x/2000; b = x%2000;
	c = b/500;  d = b%500;
	e = d/200;  f = d%200;
	g = d/100;  h = f%100;
	i = h/50;   j = h%50;
	if (x%50==0)
	{	if (x/2000!=0)
		printf("no.of 2000/-\t%d\n",a);
	if(b/500!=0)
		printf("no.of 500/-\t%d\n",c);
	if (d/200!=0)
		printf("no.of 200/-\t%d\n",e);
	if (f/100!=0)
		printf("no.of 100/-\t%d\n",g);
	if (h/50!=0)
		printf("no.of 50/-\t%d\n",i);
}
	else 
		printf("invalid enter multiples of 50");
	return 0;
}
