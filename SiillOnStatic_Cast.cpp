#include <iostream>
using namespace std;

int main ()
{
	int num;
	
    cout << "You are rquired to input any number please\n";
    cin >> num;
    
    cout << "The number you inputed will now be converted to a char VARIABLE\n";
     
     
     cout << "your number when converted to char is; " << static_cast<char>(num); // static_cast<char>(num) converts from int to char
     return 0;
    
    
}