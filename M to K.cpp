#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from miles per hour to knots." << endl;
    
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
                float k = m * 0.868976242;
                cout << endl << "The speed in knots is: " << k << endl;
                }
}
