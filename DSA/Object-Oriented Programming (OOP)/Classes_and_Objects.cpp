#include <iostream>
using namespace std;

class Student
{
public:
    // properties
    string name;
    
    int age;

    //  methods  / Member functions
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student Student1 = {"Umar", 999};
    Student1.print();

    Student Student2;
    Student2.age = 41;
    Student2.name = "Nangyal";
    Student2.print();
}