#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    int age;

public:
    void setData(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Teacher t1;

    t1.setData("Haider", 19);
    t1.print();
}