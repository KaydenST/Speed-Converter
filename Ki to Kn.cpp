#include <iostream>
using namespace std;

int main () {
    
    string input = "";
    short int choice = 0;
    
    cout << endl << "This converter will convert from kilometers per hour to knots." << endl;
    
    while (true) {
   cout << "Press any key to continue: ";
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Kilometers;
		}
	}
	
	Kilometers:
          while (true) {
                float ki = 0;
                
                cout << endl << "Please enter a speed in kilometers per hour: ";
                cin >> ki;
                float kn = ki * 0.539956803;
                cout << endl << "The speed in knots is: " << kn << endl;
                }
}
