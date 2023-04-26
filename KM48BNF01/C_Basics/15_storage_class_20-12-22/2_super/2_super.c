#include"ck.h"
extern int stock;
void sales()
{
	int product;
	printf("enter the product value");
	scanf("%d",&product);
	if(stock>=product)
		deletes(product);
	else
		printf("sorry stock is unavailable");
	return ;
}

void purchase()
{
	int limit=1000,product;
	printf("enter the product value");
	scanf("%d",&product);
	if ((stock+product)<=limit)
		add(product);
	else
		printf("sorry place is unavailable here");
	return ;
}


