/* This program calculates the body mass index of its user

*******************************NOTE***************************************
This program does not behave as should!!!*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main ()
{
	float weight = 0.0, height = 0.0, BMI = 0.0;
	string str_val= ""; // String value to kknow whether user put in the correct value.
	const float low_bmi = 18.5, high_bmi = 25.0; // Critical BMI cases in kgpermetersquared.
	
	do
	{ 
	    cout << "Please enter your weight in kg and then your height in m:\n\n "; // Requests inputs from user.
	    cin >> weight;
		cin >> height; // Gets weight and height inputs from user.
	    cout << "Your weight in kg is: " << weight << " ... Your height in meters is: " << height << "\n\n\n\n\n" << endl;                    
	    cout << "                                   *                                   \n" << "                                  ***                                  \n"  
		     << "                                 *****                                 \n" 
		     << "                                   *                                   \n" << "                                   *                                   \n"  
			 << "                                   *                                   \n" << "                                   *                                   \n" 
			 << "                                   *                                   \n" << "                                   *                                   \n"  
			 << "                                   *                                   \n" << "                                   *                                   \n"  
			 << "                                   *                                   \n" << endl; // Displays an arrow on screen.
	    cout <<  "\nIs the information you inputted correct?\nIf correct, type in 'yes' or 'y'\n\n"; // Checks for wrong input.
	    cin >> str_val;
	    
    }
    while ((str_val == "no") || (str_val == "n"));
    
    BMI = weight/ (pow(height, 2));
		cout << "Your Body Mass Index is: " << BMI << endl;
		
	    if (BMI < low_bmi) 
	        cout << "You are underweight!!!" << endl;
		
		else if (BMI > high_bmi)
		    cout << "You are overweight!!!" << endl;
		
		else 
		    cout << "You have a normal weight" << endl;
	 
return 0;	
	 
}