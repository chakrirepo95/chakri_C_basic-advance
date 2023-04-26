#include"ck.h"
static int c;
static int s;
static int a;
static int b;
void sales()
{

	int product,p=1,x;
	printf("enter the product value ");
	scanf("%d",&product);
	x=stock1();
	if(x>=product)
	{
		c++;
		deletes(product);
		s+=product;
	}
	else
	{
		printf("1:sell  the available stock  %d\n 2:sorry cancle the sales ",x);
		scanf("%d",&p);
		if(p==1)
		{
			c++;
			deletes(x);
			s+=x;
		}
	}
	return ;
}

void purchase()
{
	int limit=1000,product,p=1,x;
	printf("enter no of products ");
	scanf("%d",&product);
	x=stock1();
	if ((x+product)<=limit)
	{
		b++;
		add(product);
		a+=product;
	}
	else 
	{
		printf("1:purhase and fill the space  %d\n2:sorry cancle the purchase ",limit-x);
		scanf("%d",&p);
		if(p==1)
		{
			b++;
			add(limit-x);
			a+=limit-x;
		}
	}

			

	return ;
}
int sales_done()
{
	return c;
}

int product_sold()
{
	return s;
}
int product_purchase()
{
	return a;
}
int purchase_done()
{
	return b;
}


