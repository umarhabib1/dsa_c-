#include <iostream>
using namespace std;

class Student {
private:
    int marks = 95;

    friend class Teacher;
};

class Teacher {
public:
    void showMarks(Student s) {
        cout << "Student marks: " << s.marks;
    }
};

int main() {
    Student s1;
    Teacher t1;

    t1.showMarks(s1);
    t1.showMarks(s1);

    return 0;
}
