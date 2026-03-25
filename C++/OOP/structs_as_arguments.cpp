#include <iostream>
using namespace std;

// struct Car
// {
//     string model;
//     string color;
//     int year;
// };

// void dsipaly(Car car1){
//     cout<<car1.model<<endl;
//     cout<<car1.color<<endl;
//     cout<<car1.year<<endl;
// }

// void Reference(Car &car2){
//     car2.color = "gold";
// }

// void Pointer(Car *car2){
    //  car2.color = "black";   // ❌ Wrong;
    // car2->color = "black";   // ✅ Correct;
// }




////////////////////////////////////////////////////////////////////////////////////
struct Address { 
    string city;
     string country;
 };
struct Student
{
    string name;
    int roll;
    int marks[3];
    Address addr;
};



void UpdateMarks(Student &s1){
    s1.marks[0]+=5;
    s1.marks[1]+=5;
    s1.marks[2]+=5;
}


int main(){

        // Car car1 = {"Mustang","blue",2023};   // initialize directly:
        // Car car2 = {"corvette","green",2024};   // initialize directly:
        // //              or                            ///
        // Car car1;
        // car1.model = "Mustang";
        // car1.color = "blue";
        // car1.model = 2024;

        // dsipaly(car1);
        // Reference(&car2);
    //     Pointer(&car2);

    // cout<<car2.color<<endl;



    ////////////////////////////////////////////////////////////////////

   /* problem 1: Create a Student Struct

    Members: name, roll, marks[3]

    Print the student’s name and total marks.

    Write a function that takes a student struct and adds 5 marks to each subject.
*/

Student s1 = {"Umar", 123, {90, 95, 56}, {"unknow", "Pakistan"}};

    cout << "Name: " << s1.name << endl;
    cout << "City: " << s1.addr.city << ", Country: " << s1.addr.country << endl;

    int total = s1.marks[0] + s1.marks[1] + s1.marks[2];
    cout << "Total marks before update: " << total << endl;

    UpdateMarks(s1);

    total = s1.marks[0] + s1.marks[1] + s1.marks[2];
    cout << "Total marks after update: " << total << endl;

 cout<<s1.marks[1];


}