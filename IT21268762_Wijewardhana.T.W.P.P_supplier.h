//supplier.h
#include"customer.h"
#include"purchase"
#define SIZE[5];
class Supplier : public user {
private:
	int supplierID;
	char supplierEmail[20];
	char supplyDetails[50];
	int supplyFee;
	int purchase_services;
	purchase* supply_services[SIZE];
public:
	Supplier();
	Supplier(int psupplierID, const char psupplierEmail[], const char
		psupplyDetails[], int psupplyFee, int purchase_services;);
	void calculateSupplyFee();
	void displaysupplyFee();
	void displaySupplyDetails();
	void addsupplies();
	~Supplier();
}; #pragma once
