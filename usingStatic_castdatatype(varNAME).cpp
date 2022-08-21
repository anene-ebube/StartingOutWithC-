#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int books = 0, amountoftime = 0;
	double pertime = 0;
	string time = ""; // years, months, or days
	
	cout << "How many books will you like to read?" << endl;
	cin >> books;
	cout << "How long do you want to take to read all "<< books << " books \n";
	cin >> amountoftime >> time; // user types in the whole, with strings years, months, or days
	
	if (time == "years")
	{
		pertime = static_cast <double> (books) / amountoftime;
		cout << "\nYou will  have to read an  average of " << pertime << " books every year to accomplish your goal;\n";
	
	}
	
	else if (time == "months") 
	{
		pertime = static_cast <double> (books) / amountoftime;
	    cout << "\nYou will  have to read an  average of " << pertime << " books every month to accomplish your goal;\n";
		
	}
	
	
	return 0;
}