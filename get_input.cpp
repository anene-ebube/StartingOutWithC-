#include <iostream>
using namespace std;

int main()
{
	int input_var = 0;
	
	do 
	{
		cout << " Enter a number (Note: Inputing -1 terminates the program):"<< endl;
		
		if (!(cin >> input_var))
		{
			cout << "You have entered a non numeric..... RESTARTING................"<< endl;
			//break; // this exits the do while loop
		   
		}
		 cin.clear();
		 if (input_var != -1)
		{
			cout << "You have entered "<< input_var << endl;
		}
	
	}
	while (input_var != -1);
	
		if (cin >> input_var )
		{
		  cout << "All Done."<< endl;	
		}
		
		
		

	return 0;
}