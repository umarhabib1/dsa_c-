#include <iostream>
using namespace std;

class student_A    
{
    int roll;
    public:
    // student_A(){   // Default Constructor (No Parameters) or non Parameterized Constructor
    //     roll = 1;
    //     cout<<roll;
    // }
};


class student_B
{
    public:

    int roll;
    string name;

    student_B(string name, int r){   //   Parameterized Constructor
        roll = r;
        this->name = name;
           
    }

};

int main(){
    /*
    A constructor is a special function:

✅ Same name as the class

✅ Automatically runs when object is created

❌ Has no return type (not even void)
    */

    
    // Types of Constructors
// 1️⃣ Default Constructor (No Parameters)
//     student_A sA;
// cout<<endl;

// 2️⃣ Parameterized Constructor
  student_B s1("someone",14);


 
}