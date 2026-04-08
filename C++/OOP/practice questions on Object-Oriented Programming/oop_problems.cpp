#include <iostream>
using namespace std;

// class Shape{
//     public:
//     virtual void draw() = 0;
// };

// class Circle:public Shape{
// public:
//     void draw(){
//         cout<<"draw a circle";
//     }
// };
// class rectangle:public Shape{
// public:
//     void draw(){
//         cout<<"draw a rectangle";
//     }
// };


// class Calculator{
//     public:
//      void add(int a , int b ){
//         cout<<"the sum of int a+b = "<< a + b<<endl;
        
//     }
//      void add(int a , int b , int c){
//         cout<<"the sum of int a+b+c = "<< a + b + c<<endl;
        
//     }
//      void add(float a , float b ){
//         cout<<"the sum of float a+b = "<< a + b <<endl;
        
//     }
// };

// class Student{
//     public:
//     string name;
//     int marks;
//        Student(string n, int m) {
//         name = n;
//         marks = m;
//     }
//     Student(Student &s){
//         cout<<"i am copy constructure"<<endl;
//         name = s.name;
//         marks = s.marks;
//     }
//     void display() {
//         cout << name << " " << marks << endl;
//     }
// };



// class Deep{
//     public:
//     int *marks;

//     Deep (int m){
//         marks = new int;
//         *marks = m;
//     }

//     Deep (const Deep &d ){
//         marks = new int;
//         *marks = *(d.marks);
//     }
// };








class human{
        public:
    void show(){
        cout<<"i am a human";
    }
};
class Student: virtual  public human{};
class Teacher:  virtual public human{};
class Assistant : public Student, public Teacher {};



int main(){

    /*
    Q1

Create a base class Shape

Function:

virtual void draw()

Create derived classes:

Circle

Rectangle

Override draw() in both classes.

Call them using base class pointer.*/
// Shape* ptr;
// Circle obj1;
// ptr = &obj1;
// ptr->draw();




/*
Q10

Create a class Calculator and overload function add() for:

add(int , int)
add(int , int , int)
add(float , float)
*/
// Calculator obj1;
// obj1.add(3.4f, 3.3f);
// obj1.add(5, 3);
// obj1.add(5, 3,4);



/*
Q12

Create a class Student with:

name

marks

Create a copy constructor that copies data from one object to another.
*/
// Student s1("umar" ,123 );
// Student s2 = s1;   // Copy constructor called
//     s2.display();





/*
Q13

Create a class with a pointer variable

Implement a deep copy constructor.
*/

// Deep d1(56); 
// Deep d2 = d1;

// *d2.marks = 99;

// cout<<*d1.marks<<endl;
// cout<<*d2.marks<<endl;






/*
Q14

Create classes:

Person
   |
Student   Teacher
     |
   Assistant

Solve the diamond problem using virtual inheritance.*/

Assistant a1;
a1.show();

}