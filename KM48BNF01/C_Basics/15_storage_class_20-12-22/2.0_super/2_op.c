#include"ck.h"
int stock=100;
void add(int product)
{
	stock=stock+product;
	return ;
}
void deletes(int product)
{
	stock=stock-product;
	return ;
}

int stock1()
{
	return stock;
}


