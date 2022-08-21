#include <iostream>
using namespace std;

int main ()
{
	cout << ".............Thank you for your patronage.............\n";
	
	const double MEALCHARGE = 88.67,
	             TAXPERCENT = 0.0675,
	             TIPPERCENT = 0.2;
	double tax =  TAXPERCENT * MEALCHARGE,
	       tip =  TIPPERCENT * (MEALCHARGE + tax),
		   bill = MEALCHARGE + tax + tip;  
	                    
	    
	cout << "\nYour meal cost is: " << MEALCHARGE << " Dollars\n";
	cout << "\nThe tax on your meal is: 6.75% (" << TAXPERCENT << ") of $88.67\n";
	cout << "\nYou are to pay a tip of 20%\n";
	
	cout << "\nYour tax in Dollars is: " << tax << endl;
	cout << "\nYour tip amount in Dollars is: " << tip << endl;
	cout << endl;
	cout << endl;
	cout << "Your TOTAL bill in Dollars is: " << bill << endl;
	
	return 0;

    
	        
}