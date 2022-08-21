#include <iostream>
using namespace std;

int main ()
{
	const int PURCHASE = 95;
	
	
	const double StateSalesTaxPercent = 0.04, 
	             CountySalesTaxPercent = 0.02;
	             
	double TotalSalesTax = 0.0,
	       StateSalesTax = 0.0,
		   CountySalesTax = 0.0,
		   TotalSaleTax = 0.0;
		   
	StateSalesTax = StateSalesTaxPercent * PURCHASE;
	
	cout << "You purchased items worth $95.........." << endl;
	
	cout << "\nThe state sale tax for your purchase is: " << StateSalesTax << " Dollars\n";
	
	CountySalesTax = CountySalesTaxPercent * PURCHASE;
	
	cout << "\nThe county sale tax for your purchase is: " << CountySalesTax << " Dollars\n"; 
	
	TotalSaleTax = StateSalesTax + CountySalesTax;
	
	cout << "\nThe total tax payable for your $95 purchase is: " << TotalSaleTax << " Dollars" << endl;
	
	
	return 0;       
	
	
	
}