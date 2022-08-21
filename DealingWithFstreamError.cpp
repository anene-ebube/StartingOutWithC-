// This program tests for file open errors
// **** Copied from Starting Out Wtih C++  but with slight modifications
// Checkout the code on page 281

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream inputFile;
	int number;
	std::string fileName = " ";
	std::cout << "What is the name of the Excel file you want to open? This must be a .txt file.\nDo not include its extention name when indicating the file!!!" << std::endl;
	std::cin >> fileName;
	
	if ((fileName != "excela.txt") || (fileName != "excelb.txt"))
	{
	 // Testing for .txt in fileName)
		fileName += ".txt"; // This adds .txt to the file name if the user did not do so.
    }
	else 
	{fileName = fileName;
	}
	std::cout << fileName;
	// Open the file.
	inputFile.open(fileName.c_str()); //fileName.c_str() helps convert the user input to what fstream uses
	
	// If file opens successfully, process it.
	if (inputFile)
	{
		// Read numbers from file
		//display them
		
		while (inputFile >> number)
		{
			std::cout << number << std::endl;
			
		}
		// Close file.
		inputFile.close();
		
	}
	else
	{
		// Display error message.
		std::cout << "Error in opening the file \n";
	}
	
	return 0;
}