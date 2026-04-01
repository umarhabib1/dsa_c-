#include <iostream>
using namespace std;

// 1️⃣ Single Inheritance
// class Parent {
// public:
//     void show() {
//         cout << "Parent class function" << endl;
//     }
// };

// class Child : public Parent {
// };




// 2️⃣ Multiple Inheritance
// class Father{
// public:
// void money(){
//     cout<<"father gives money";
// }
// };
// class Mother{
// public:
// void care(){
//     cout<<"Mother gives care";
// }
// };

// class child:public Father, public Mother{

// };




//    3️⃣ Multilevel Inheritance
// class A{
//     public:
//     void funcA(){
//         cout<<"Class A";
//     }
// };
// class B: public A {
//     public:
//     void funcB(){
//         cout<<"Class B";
//     }
// };
// class C: public B {
//     public:
//     void funcC(){
//         cout<<"Class C";
//     }
// };



// 4️⃣ Hierarchical Inheritance
// class Parent {
// public:
//     void show() {
//         cout << "Parent Function" << endl;
//     }
// };

// class Child1 : public Parent {
// };

// class Child2 : public Parent {
// };



//    5️⃣ Hybrid Inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
};


int main(){
    //  There are 5 types:

// 1️⃣ Single Inheritance
// One child inherits from one parent.
//   Child obj;
//     obj.show();   // inherited




//     2️⃣ Multiple Inheritance
// 👉 One child inherits from more than one parent.
    // child obj;
    // obj.money();
    // obj.care();



//    3️⃣ Multilevel Inheritance
// 👉 Inheritance in a chain.
    //   C obj;
    //   obj.funcA();
    //   obj.funcB();
    //   obj.funcC();




//     4️⃣ Hierarchical Inheritance
// 👉 One parent, multiple child classes.
    // Child1 obj1;
    // Child2 obj2;
    // obj1.show();
    // obj2.show();



//    5️⃣ Hybrid Inheritance
// 👉 Combination of different inheritance types.
// Example: Multiple + Multilevel.
D obj;
    obj.showA();
    obj.showC();

}