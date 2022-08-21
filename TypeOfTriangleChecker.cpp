#include <iostream>
using namespace std;

int main ()
{
	float a,b,c; // Three sides of of the triangle.
	
	cout << "Please enter the three sides of your triangle...\n\n" << endl;
	cin >> a >> b >> c;
	
	if (a == b && b == c)
	
		cout << "This is an equilateral triangle.\n";
	
	else if (a != b &&  b != c )

		cout << "This is an scalene triangle.\n";
	
	else 
	
		cout << "This is a isosceles triangle.\n";
	
	
	cout << "Thanks. Bye";
	system ("cls"); // Clears your console screen
	
	system ("pause>0"); // removes all other messages except the required code output
return 0;
	

	
	
}