#include <iostream>
using namespace std;

int main() {
    bool exit = false;
    while (!exit) {
        int input; // Stores what the user want's to convert or do
        double amountToConvert; // Stores how much the user wants to convert of some unit
        double result; // Stores the result of the conversion

        cout << "What do you want to convert/do? \n1. Meters to Feet \n2. Feet to Meters \n3. Kilometers to Miles \n4. Miles to Kilometers \n5. Kilograms to Pounds \n6. Pounds to Kilograms \n7. Celcius to Fahrenheit \n8. Exit" << endl;
        cin >> input;
        if (input == 8) {
            exit = true;
        } else {
            cout << "Now enter how much you want to convert: ";
            cin >> amountToConvert;
        
            switch (input) {
            case 1:
                result = amountToConvert * 3.2808;
            case 2:
                result = amountToConvert * 0.3048;
            case 3:
                result = amountToConvert * 0.6213;
            case 4:
                result = amountToConvert * 1.6093;
            case 5:
                result = amountToConvert * 2.2046;
            case 6:
                result = amountToConvert * 0.4535;
            case 7:
                result = amountToConvert * 33.8;
            }
        
            cout << "Result: ";
            cout << result << endl;
        }
    }
    return 0;
}