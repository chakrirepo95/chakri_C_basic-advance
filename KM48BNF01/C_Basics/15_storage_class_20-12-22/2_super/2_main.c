/* 2) wap-for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.
Stock : Maintains a variable for available stock. and 2 functions, addstock and deletestock to update the stock variable on sales or purchase respectively.
Sales : Has one function: Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.
Purchase : Has one function : Purchase – will increase the stock by the number of items purchased.Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.
SuperMarket : Display menu with choices : 1 ) check AvailableStock 2 ) Purchase new items 3) Sell items … this should be continuous as long as the user wants to continue. Program should stop when the user wants to quit */

#include"ck.h"
extern int stock;
int main()
{
	int n=1;
	while(n)
	{
		int i;
		printf(" 1.check availablestock \n 2.sell products \n 3.purchase new products \n 4.quit \n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("%d\n",stock);break;
			case 2:sales();break;
			case 3:purchase();break;
			case 4:n=0;break;
		}
	}
	return 0;
}






