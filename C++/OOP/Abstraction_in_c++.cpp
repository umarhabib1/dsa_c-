#include <iostream>
using namespace std;
class Car {
private:
    void engineStart() {   // hidden
        cout << "Engine started\n";
    }

public:
    void drive() {         // visible
        engineStart();
        cout << "Car is moving\n";
    }
};

int main(){
    /*
    Abstraction means:
Showing only important details and hiding internal implementation.
*/
// example 1:
    Car c;
    c.drive();
}