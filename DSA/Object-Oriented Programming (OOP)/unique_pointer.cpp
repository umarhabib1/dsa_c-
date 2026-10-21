#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
        cout << "Constructor called\n";
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    ~Student() {
        cout << "Destructor called\n";
    }
};

int main() {
    unique_ptr<Student> ptr =
        make_unique<Student>("Ali");

    ptr->display();

    return 0;
}