#include <iostream>
using namespace std;

class Teacher
{
private: // Access Modifiers
    int Salary;

public: // Access Modifiers
    // properties
    string name;
    string Subject;
    int age;


    
    //  methods  / Member functions
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Age: " << Subject << endl;
    }

    // setter fuction
    void setSalary(int s)
    {
        Salary = s;
    }

    // getter fuction
    int displaySalary()
    {
        return Salary;
    }
};

int main()
{
    Teacher Teacher2;
    Teacher2.name = "Nangyal";
    Teacher2.Subject = "English";
    Teacher2.age = 41;
}