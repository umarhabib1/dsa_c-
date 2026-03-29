#include <iostream>
using namespace std;

// class student_B
// {
//     public:

//     int roll;
//     string name;

//     student_B(string name, int r){   //   Parameterized Constructor
//         roll = r;
//         this->name = name;
           
//     }

//     student_B(student_B &s){                  // custom copy constructor
//         this->roll = s.roll;
//         this->name = s.name;
//         cout<<"i am custom copy constructer "<<endl;
//     }
// };

// class student{
//     public:
//     string name;
//     double* gpa;

//     student(string n, double g){
//         this->name = n;
//         gpa = new double;
//         *(gpa) = g;
//     }

//     student( student &obj){
//         this-> name = obj.name;
//         gpa = new double;
//          *(gpa) = *obj.gpa;
//     }
    

// };





class value{
    public:
    int* num;

    value(int n){
       num = new int(n);
    }

    value(value &obj){
         num = new int;
         *num = *(obj.num);
    }

    ~value(){
        delete num;
    }

};


int main(){
//  Copy Constructor  = A copy constructor is a special constructor in C++ that creates a new object
                         //  by copying an existing object of the same class.

    //  student_B s1("someone",14);
    // student_B s2(s1);  // default  copy constructor
    // cout<<s2.name<<endl<<s2.roll;


    //  student s1("someone",3.2);
    // cout<<s1.name<<endl<<*(s1.gpa);
    // student s2(s1);  // custom copy constructor
    // *(s2.gpa) = 4.0; 
    // cout<<s1.name<<endl<<*(s1.gpa);


    // types of copy constructors 


    // 1) A shallow copy copies all the data members of one object into another object 
    // without copying the memory they point to.





    value v1(20);
    cout<<*(v1.num)<<endl;
    value v2 = v1;
    *(v2.num) = 90;
    cout<<*(v2.num)<<endl;


}