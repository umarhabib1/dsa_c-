#include <iostream>
using namespace std;

int main(){
 
    float temp;
    char unit;

    cout << "Enter temperature: ";
    cin >> temp;

    cout << "Enter unit (C or F): ";
    cin >> unit;

    if (unit == 'C' || unit == 'c') {
        cout << "Temperature in Fahrenheit: " << (9.0/5)*temp + 32;
    }
    else if (unit == 'F' || unit == 'f') {
        cout << "Temperature in Celsius: " << (5.0/9)*(temp - 32);
    }
    else {
        cout << "Invalid unit!";
    }

    return 0;
}



   

