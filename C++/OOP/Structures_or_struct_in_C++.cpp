#include <iostream>
using namespace std;
struct student
{
    bool Is_student = true;
    string name;
    int age;
    double Gpa;
};

int main(){

    // student student_1;
    // student_1.Is_student = false ;
    // student_1.name = "nangyal";
    // student_1.age = 15;
    // student_1.Gpa = 1.5;

    // cout<<student_1.Is_student<<endl;
    // cout<<student_1.name<<endl;
    // cout<<student_1.age<<endl;
    // cout<<student_1.Gpa<<endl;



    student student_2;
    student_2.name = "hassan";
    student_2.age = 15;
    student_2.Gpa = 3.9;

    cout<<student_2.Is_student<<endl;
    cout<<student_2.name<<endl;
    cout<<student_2.age<<endl;
    cout<<student_2.Gpa<<endl;


}