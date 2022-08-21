#include <iostream>
using namespace std;


int main ()
{
	const double a = 28.0, b = 32.0, c = 37.0, d = 24.0, e = 33.0;
	double sum = 0.0, average = 0.0;
	    
	sum = a + b + c + d + e;
	average = sum / 5;  // there are only 5 numbers to calculate the average with
	
	cout << "the average of 28, 32, 37, 24, and 33 is: " << average << endl;
}