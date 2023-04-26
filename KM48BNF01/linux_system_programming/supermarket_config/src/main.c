/* 2) wap-for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock. and 2 functions, addstock and deletestock to update the stock variable on sales or purchase respectively.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit */

#include"../inc/ck.h"
int main()
{
	int n=1,p=0;
	while(n)
	{
/*#ifdef _1

#ifdef _2
	
#ifdef _3
	
#ifdef _4*/
	
		int i;
		printf(" 1.check stock \n 2.sell products \n 3.purchase products \n 4.quit from store \n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("check stock %d\n",stock1());break;
			case 2:sales();p++;break;
			case 3:purchase();break;
			case 4:n=0;
// #endif

// #ifdef  stock1();
			       printf("1:latest stock %d\n",stock1());
// #endif
// #ifdef sales_done();			     
			       printf("2:no of sales done %d\n",sales_done());
// #endif
// #ifdef product_sold();
			       printf("3:no of products sold %d\n",product_sold());
// #endif
// #ifdef purchase_done();
			       printf("4:no of purchase done %d\n",purchase_done());
// #endif
// #ifdef product_purchase();
			       printf("5:no of products purchase %d\n",product_purchase());
// #endif
// #ifdef p;

			       printf("6:no of customers visited the store %d\n",p);break;
// #endif
		}
	}
	return 0;
}


