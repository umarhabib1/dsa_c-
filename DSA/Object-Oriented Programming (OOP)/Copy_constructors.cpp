#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(const Student &obj)
    {
        name = obj.name;
        age = obj.age;
    }
};

int main()
{
    Student s1("Haider", 19);

    Student s2 = s1;   // Copy constructor called

    cout << s2.name << endl;
    cout << s2.age << endl;
}