#include <iostream>
using namespace std;
// class  math{
//     public:
//     void add(int a,int b){
//          cout<<"the sum of a + b is "<<a+b<<endl;
//     } 
//     void add(int a,int b,int c){                         //  Compile-Time Polymorphism (Static Binding)
//          cout<<"the sum of a + b +c is "<<a+b+c<<endl;
//     }
//     void add(int a,int b,int c,int d){
//          cout<<"the sum of a + b + c + d  is "<<a+b+c+d<<endl;
//     }
// };


class parent{
    public:
    void getInfo(){
        cout<<"Paret class";
    }

    virtual void hello(){        // Virtual Function
        cout<<"hello from parent";
    }

};
class child:public parent{
    public:
    void getInfo(){
        cout<<"child class";
    }
    void hello(){
        cout<<"hello from child";
    }
};

int main(){
    /*
    There are two main types:

1️⃣ Compile-Time Polymorphism (Static Binding)
The decision is made at compile time.
*/

// Operators work differently depending on operands.
// Example:

// int a = 5 + 3;      // addition
// string s = string("Hi ") + "Umar"; // string concatenation
// cout << s;

// Example number 2: function overloading
// math obj1;
// obj1.add(1,2);
// obj1.add(1,2,3);
// obj1.add(1,2,3,4);



//////////////   Run-Time Polymorphism (Dynamic Binding) ///////////////////////////

// Run-Time Polymorphism = The decision is made during program execution.

//virtual function = A virtual function is a member function declared with the virtual keyword in a base 
// class and redefined in a derived class to enable runtime binding.



// Examle 1: fuction Overriding

parent* p;   // base class pointer
child c1;
p = &c1;     // pointer points to child object
p->hello();  // runtime polymorphism
p->getInfo();

// parent p1;
// p1.getInfo();

}