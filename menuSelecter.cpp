// This is a menu-driven program making function calls
// for each selection a user makes.

#include <iostream>
#include <iomanip>

//function prototypes
void showMenu();
void showFees(double, int);

int main()
{
	int choice;
	int months;
	
	// Constants for menu choices
	const int ADULT_CHOICE = 1,
			  CHILD_CHOICE = 2,
			  SENIOR_CHOICE = 3,
			  QUIT_CHOICE = 4;
	
	// Constants for membership rates
	const double ADULT = 40.0,
	             CHILD = 20.0,
	             SENIOR = 30.0;
	
	// Setup for numeric output format
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	
	do 
	{
		// Display menu and get user's choice.
		showMenu();
		std::cin >> choice;
		
		// Validate the menu selection
		while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
		{
			std::cout << "Please enter a valid menu choice: ";
			std::cin >> choice; 
		}
		
		// If the user does not want to quit, then proceed.
		if (choice != QUIT_CHOICE)
		{
			// Get the number of months.
			std::cout << "For how many months? ";
			std::cin >> months;
			
			// Display the membership fees.
			switch (choice)
			{
				case ADULT_CHOICE:
					showFees(ADULT, months);
					break;
				case CHILD_CHOICE:
					showFees(CHILD, months);
					break;
				case SENIOR_CHOICE:
					showFees(SENIOR, months);
					break;
			}
		}
	  } while (choice != QUIT_CHOICE); 
	return 0;
}

//*****************************************************************
// Definition of function showMenu which displays the menu.       *
//*****************************************************************

void showMenu()
{
	std::cout << "\n\tHealth Club Membership Menu\n\n"
	          << "1. Standard Adult Membership\n"
	          << "2. Child Membership\n"
	          << "3. Senior Citizen Membership\n"
	          << "4. Quit the program\n"
	          << "\t(Type in \"4\" to quit)"
	          << "\n\nEnter your choice: ";
}

//*****************************************************************
// Definition of function showFees. The memberRate parameter holds* 
// the monthly membership rate and the months parameter holds the *
// number of months. The function displays the total charges      *
// accrueid by the user.                                          *
//*****************************************************************

void showFees (double memberRate, int months)
{
	std::cout << "The total charges are $"
	          << (memberRate * months) << std::endl;
}