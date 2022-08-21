#include <iostream>
using namespace std;

int main()
{
	float test;
	
	test = 2.0e38 * 1000; // this should overflow test
	cout << test << endl;
	test = 2.0e-38 / 2.0e38; // this should underflow test
	cout << test << endl;
	return 0;
}