#include <iostream>
using namespace std;
class Teacher
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t;

    t.setSalary(50000);    // ✅
    cout << t.getSalary(); // ✅

    // t.salary = 50000; // ❌ wil give error
}