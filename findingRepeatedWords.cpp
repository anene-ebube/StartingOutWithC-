#include <iostream>
#include <string>
using namespace std;

int main ()
{
 string previous = " ";
 string current = " ";
 
    while (cin>> current)
    {
        if (current == previous ) 
        {
            cout << " repeated word: "<< current << "\n";
            previous = current;
        
        }
    }
return 0;
}