#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	float num1 = 0.0, num2 = 0.0;
	char operation = ' '; // This allows for the user to type in the operation .
	string clear_screen = "  "; // String because users might tend to put in more than one character.
	                           // If this was char, any more than one input would have crashed the program.
	cout << "********** Simple Calculator **********" << endl;
	cout << "\n\n\nNote that this calculator takes in just two numbers at a time and only the following operators can be used for the\nmathematical problem:\n\n"
	     << "#############  +  ############# (addition)\n#############  -  ############# (subtraction)\n#############  *  ############# (multiplication)"
		 << "\n#############  /  ############# (division)\n#############  %  ############# (modulo operation)\n#############  ^  ############# (power function)\n\n";	
		 
		 // +
		 // -
		 // *
		 // /
		 // %
		 // ^    THESE ARE THE ONLY WORKABLE OPERATIONS
		 
	cout << "Press any key(followed by 'enter') to clear this Note screen"<< endl;
	cin >> clear_screen;
	system("cls");
	cout << "Please enter your first Number: ";
	cin >> num1;
	cout << "\nPlease enter your second Number: ";
	cin>> num2;
	cout << "\nWhat operation do want to carry out? ";
	cin >> operation;
	
	switch (operation)
	{
		
		case '-':
			cout << endl << num1 << operation << num2 << " = " << num1 - num2 << endl;
			break;
		
		case '+':
			cout << endl << num1 << operation << num2 << " = " << num1 + num2 << endl;
			break;
		
		case '*':
			cout << endl << num1 << operation << num2 << " = " << num1 * num2;
			break;
			
		case '/':
			cout << endl << num1 << operation << num2 << " = " << num1/num2;
			break;
		
		case '%':
			// We need to ensure the numbers inputted by the user is an integer in order for the modulus operator to work.
			{
			bool isNum1Int = 0, isNum2Int = 0;
			
			isNum1Int = (int(num1) == num1);   // This tests to see if num1 is truly a whole number. Note that int(num1) converts float num1 to int num1.
			isNum2Int = (int(num2) == num2);   // This tests to see if num2 is truly a whole number. Note that int(num2) converts float num2 to int num2.
			
			if (isNum1Int && isNum2Int)
				cout << endl << "          " << num1 << " " << operation << " " << num2 << " = " << (int)num1 % (int)num2 << endl;
			else 
			    cout << "\nNot a valid operation";
			break;
		}
		
		case '^':
			cout << endl << num1 << "raised to the power of " << operation << num2 << " = " << pow(num1, num2);
			break;
			
		default:
			cout << "\nSorry, you have entered an invalid operation!";
		 
	}
	system("pause >0");
	return 0;
	
	
	
}