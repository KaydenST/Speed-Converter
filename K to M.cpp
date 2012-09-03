#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from knots to miles per hour." << endl;
    
    while (true) {
   cout << "Press any key to continue: ";
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Knots;
		}
	}
	
	Knots:
          while (true) {
                float k = 0;
                
                cout << endl << "Please enter a speed in knots: ";
                cin >> k;
                float m = k * 1.15077945;
                cout << endl << "The speed in miles per hour is: " << m << endl;
                }
}
