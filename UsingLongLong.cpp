#include <iostream>
using namespace std;

int main ()
{
	cout << "This program outputs a long long integer literal" << endl;
	unsigned long long Long_Long_Integer = 90LL;
	
	 
	 
    cin >> Long_Long_Integer;
    
	 if (Long_Long_Integer <1844674407370955161)
	 {
	 	
	 	cout << " the long long integer is:  " << Long_Long_Integer << endl;
	 	
	 	
	 }
	  
	 else
	 { 
	    
	    do 
	 {
	
	 
	 cout << " You have exceeded the limit" << endl;
	 
     } 
    
      while (Long_Long_Integer > 1844674407370955161);
	 
	 } 

	 	
	
	 
	
	return 0;
}