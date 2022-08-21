#include <iostream>
#include <iomanip> // Io manipulator manipulates stream.
using namespace std;

int main ()
{
	int a = 1,b = 22,c = 31,d = 122;
	
	cout << setw (4) << a << setw (4) << b << endl << setw (4) << c 
	     << setw (4) << d << endl; // Setw as the name implies sets the width for your output.
	
	cout << "\na, b, c, and d in hex: " << endl << hex << a << endl
	     << b << endl << c << endl << d << endl; //Hex here tells the stream to output in base 16.
	
	cout << "\na,b,c,and d in oct: " << endl << setbase(8) << a << endl 
	                                 << b << endl << c << endl << d << endl; // Setbase () tells stream what base to output in.
	return 0;  
}