#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from miles per hour to kilometers per hour." << endl;
    
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
                float m = 0;
                
                cout << endl << "Please enter a speed in miles per hour: ";
                cin >> m;
                float k = m * 1.609344;
                cout << endl << "The speed in kilometers per hour is: " << k << endl;
                }
}
