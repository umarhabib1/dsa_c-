#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int* age;

    Student(string n, int a)
    {
        name = n;
        age = new int(a);
    }

    // Shallow copy constructor
    Student(const Student& obj)
    {
        name = obj.name;
        age = obj.age;   // copies the ADDRESS
    }
};

int main()
{
    Student s1("Ali", 20);

    Student s2 = s1;   // shallow copy

    *s2.age = 25;

    cout << "s1 age: " << *s1.age << endl;
    cout << "s2 age: " << *s2.age << endl;
}