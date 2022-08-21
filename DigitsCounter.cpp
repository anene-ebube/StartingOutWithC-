#include <iostream>
using namespace std;

//Program to count the number of digits in a number

 
int main()
{
	int number, count;
	
	cout << "Number: ";
	cin >> number;
	int original_number = number;
	
	if (number != 0)
	{
	    if (number < 0)
	        number *= (-1);
	
	    while (number > 0)
	    {
	    	number /= 10;
	    	count++;
		}
	 cout << original_number << " has " << count << " digits";
    }
    
    return 0;
}