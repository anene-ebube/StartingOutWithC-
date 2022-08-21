#include <iostream>
using namespace std;

// program that reverses a number
int main ()
{
	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number;
	
	while (number != 0)
	{
		if (number < 0)
		    number *= (-1);
		    
		reversedNumber *= 10;
		reversedNumber += number % 10;
		number /= 10;
	}
	
	cout << "Reversed Number is " << reversedNumber;
}