#include <iostream>
using namespace std;

class Student {
public:
    // Constructor
    Student() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Student s;  // Object created

    cout << "Inside main()" << endl;

    return 0;  // Destructor is automatically called
}
