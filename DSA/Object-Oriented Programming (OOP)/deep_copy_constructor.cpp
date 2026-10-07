#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int* age;

    // Normal constructor
    Student(string n, int a)
    {
        name = n;
        age = new int(a);
    }

    // Deep copy constructor
    Student(const Student& obj)
    {
        name = obj.name;
        age = new int(*obj.age);
    }
};

int main()
{
    Student s1("Ali", 20);

    Student s2 = s1;   // Deep copy

    *s2.age = 25;      // Change s2's age

    cout << "s1 age: " << *s1.age << endl;
    cout << "s2 age: " << *s2.age << endl;
}