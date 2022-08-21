// This program does conversions from cups to fluid ounces and from kilograms
// to pounds.

#include <iostream>
#include <iomanip>

// Function prototypes
void showIntro();
int typeOfConversion(int);
double getCups();
double getKilos();
double cupsToOunces(double);
double kilosToPounds(double);

// Conversion constants.
const double cupToOuncesConst = 8.0;
const double kilosToPoundsConst = 2.20462;

int main()
{
	// Variable for the conversion type.
	int convType;
	int conv;
	
	// Variables for the cups and ounces.
	double cups, ounces;
	
	// Variables for kilos and pounds.
	double kilos, pounds;
	
	// Set up numeric output formatting.
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	
	// Display intro screen.
	showIntro();
	
	// Request for type of conversion user wants and assigns answer to convType.
	convType = typeOfConversion(conv);
	
	switch (convType)
	{
		case 1:
			// Get the number of cups.
			cups = getCups();
	
			// Convert cups to fluid ounces.
			ounces = cupsToOunces(cups);
	
			// Displa the number of ounces.
			std::cout << cups << " cups equals " 
	        	      << ounces << " ounces.\n";
	 		break;
		
		case 2:
	
			// Get the weight in kilograms.
			kilos = getKilos();
		
			// Convert kilos to pounds.
			pounds = kilosToPounds(kilos);
		
			// Display the weight in pounds.
			std::cout << kilos << "kilogram(s) equals "
			          << pounds << " pound(s).\n";
			break;	
					  
		default:
			std::cout << "You have successfully quit the program!\n"
			          << "See you around!!!\n\n";
			 
    }
		
	return 0;
}

//*************************************
// The showIntro function displays an *
// introductory screen.               *
//*************************************

void showIntro()
{
	std::cout << "This Program will help you convert measurements\n"
	          << "in cups to fluid ounces and measurements in kilograms\n"
			  << "to pounds. \n\nFor your "
	          << "reference, the formula for converting cups to ounces is:\n"
			  << "1 cup = 8 fluid ounces\n\n"
			  << "And for converting kilograms to pounds is:\n"
			  << "1 kilogram = 2.20462 pounds.\n\n"
              << "Press any key to clear the screen.";	
	char clearScreen = ' ';
	std::cin >> clearScreen;
	system("cls");
}

//*****************************************
// The typeOfConversion function provides *
// the user with options of the type of   *
// conversion they want to perform.       *
// Whether cups to fluid ounces or        * 
// kilograms to pounds.                   *
// It will then return the users choice   *
// as an int value                        *
//*****************************************

int typeOfConversion(int userConv)
{
	std::cout << "User, what conversion do you want to perform?\n"
	          << "Please answer with the following numbers:\n"
	          << "\t(1) for converting cups to fluid ounces\n"
	          << "\t(2) for converting kilograms to pounds\n"
	          << "\tPress any key to quit the program\n";
	          
	userConv = 0; // This is the user input.

	std::cin >> userConv;
	
	return userConv;
}



 
//*******************************************
// The getCups function prompts the user    *
// to enter the number of cups and then     *
// returns that value as a double           *
//*******************************************

double getCups()
{
	double numCups;
	
	std::cout << "Enter the number of cups: ";
	std::cin >> numCups;
	return numCups;
}

//********************************************
// The getKilos function prompts the user    *
// to enter the weight in kilos and then     *
// returns that value as a double            *
//********************************************

double getKilos()
{
	double kilo;
	
	std::cout << "Enter the weight in kilos: ";
	std::cin >> kilo;
	return kilo;
}



//*****************************************
// The cupsToOunces function accepts a    *
// number of cups as an argument and      *
// returns the equivalent number of fluid *
// ounces as a double.                    *
//*****************************************

double cupsToOunces(double numCups)
{
	return numCups * cupToOuncesConst;
}


//******************************************
// The kilosToPounds function accepts the  *
// weight in kilos as an argument and      *
// returns the equivalent weight in pounds *
// as a double.                            *
//******************************************

double kilosToPounds(double kiloWeight)
{
	return kiloWeight * kilosToPoundsConst;
}




	