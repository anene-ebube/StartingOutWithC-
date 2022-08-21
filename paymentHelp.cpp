// This program calculates the gross pay of its user.

#include <iostream>
#include <iomanip>

// Global constants
const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

// Function Prototypes
double getBasePay(double);
double getOvertimePay(double);

int main()
{
	double hours,            // Hours Worked
	       basePay,          // Base pay
	       overtime = 0.0,   // Overtime pay
	       totalPay;         // Total pay
	 
	// Get the number of hours worked.
	std::cout << "How many hours did you work? ";
	std::cin >> hours;
	
	// Get the amount of pay base.
	basePay = getBasePay(hours);
	
	// Get overtime pay, if any.
	if (hours > BASE_HOURS)
		overtime = getOvertimePay(hours);
	
	// Calculate the total pay.
	totalPay = basePay + overtime;
	
	// Set up the numeric output formatting.
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	
	//Display the pay.
	std::cout << "Base pay: $" << basePay << std::endl
	          << "Overtime pay: $" << overtime << std::endl
	          << "Total pay: $" << totalPay << std::endl;
	          
	return 0;
}

//************************************************ 
// The getBasePay function accepts the number of *
//hours worked as an argument and returns the    *
// employee's pay for non-overtime hours.        *
//************************************************

double getBasePay (double hoursWorked)
{
	double basePay; // To hold base pay.
	
	// Determine base pay.
	if (hoursWorked > BASE_HOURS)
		basePay = BASE_HOURS * PAY_RATE;
	else
		basePay = hoursWorked * PAY_RATE;
	
	return basePay;
 } 

//*************************************************
// The getOvertimePay function accepts the number *
// of hours worked as an argument and returns the *
// employee's overtime pay                        *
//*************************************************

double getOvertimePay (double hoursWorked)
{
	double overtimePay; // To hold overtime pay.
	
	// Determine overtime pay.
	if (hoursWorked > BASE_HOURS)
	{
		overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * 
			OT_MULTIPLIER;
	}
	else 
		overtimePay = 0.0;
	
	return overtimePay;
}