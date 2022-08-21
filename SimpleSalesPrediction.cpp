/* ************* This program outputs the sales 
of the East Division of
 a company *************** */
 
#include <iostream>
using namespace std;

int main ()
{
	const int TOTAL_SALE = 8'600'000;
	
	
	cout << "The total company sales for the year is 8.6 million dollars ($" 
	<< TOTAL_SALE << ")\n" ;
	
	
	const double east_coast_percentage = 0.58; 
	double  east_coast_sales = east_coast_percentage * TOTAL_SALE;
	
	
	cout << "\nEast Coast's total sales for the year is: $"
	     << east_coast_sales << '\n';
	return 0;
}