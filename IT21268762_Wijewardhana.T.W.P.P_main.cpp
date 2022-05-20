
#include"stocks.h"
#include"supplier.h"

#include<iostream>
using namespace std;
int main()
{
	//Object creation
	
	user* supplier = new supplier();
	
	stocks* stock = new stocks();
	
	
	supplier->login();
	supplier->displaySupplyDetails();
	
	stock->addStocks();
	stock->displayStockDetails();
	

	
	delete supplier;
	
	delete stocks;
	
	return 0;
}