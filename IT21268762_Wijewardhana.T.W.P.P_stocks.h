//stocks.h
#include"payment.h"
#define SIZE 3
class Stocks {
private:
	int stockID;
	char stockType[20];
	char stockDate[6];
	char stockDetails[30];
	double stockPrice;
	payment* pay[SIZE];
public:
	Stocks();
	Stocks(int stockID, const char pstockType[], const char stockDate, const char
		pstockDetails[], double stockPrice, int pay1, int pay2);
	void calculateSellAmt(int prod_id, const char prod_type, double prod_amt);
	void addStocks();
	void checkStocks();
	void updateStockDetails();
	void displayStockDetails();
	void addStocks();
	~Stocks();
};