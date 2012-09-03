#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from knots to kilometers per hour." << endl;
    
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
                float kn = 0;
                
                cout << endl << "Please enter a speed in knots: ";
                cin >> kn;
                float ki = kn * 1.85200;
                cout << endl << "The speed in kilometers per hour is: " << ki << endl;
                }
}
