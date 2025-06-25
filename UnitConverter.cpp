#include <iostream>
using namespace std;

int main() {
    bool exit = false;
    while (!exit) {
        int input; // Stores what the user want's to convert or do
        double amountToConvert; // Stores how much the user wants to convert of some unit
        double result; // Stores the result of the conversion

        cout << "What do you want to convert/do? \n1. Meters to Feet \n2. Feet to Meters \n3. Exit" << endl;
        cin >> input;
        if (input == 3) {
            exit = true;
        } else {
            cout << "Now enter how much you want to convert: ";
            cin >> amountToConvert;
        
            switch (input) {
            case 1:
                result = amountToConvert * 3.2808;
            case 2:
                result = amountToConvert * 0.3048;
            }
        
            cout << "Result: ";
            cout << result << endl;
            cout << "Press ENTER to continue" << endl;
        }
    }
    return 0;
}