#include <iostream>
using namespace std;

int main()
{
	int guestUserNum = 0, hostUserNum = 0;
	cout << "Host Num: ";
	cin >> hostUserNum;
	
	system ("cls");
	
	cout << "Gust Num: ";
	cin >> guestUserNum;
	
	system ("cls");
	
	(guestUserNum == hostUserNum)? cout << "correct" : cout << "fail";// This does the samae job as the commented lines of code below.
	
	/*if (hostUserNum == guestUserNum)
	    cout << "CORRECT!!!" << endl;
	else 
	    out << "You failed!!!";
	*/
	
	system ("pause > 0");
	return 0;
	
}