#include <iostream>
using namespace std;
// void func(){
//     int x = 0;
//     cout<<x<<endl;
//     x++;
// }
void func(){
static int x = 0;//When variable inside a function is static,it keeps its value between function calls.      
cout<<x<<endl;
    x++;
}


class Student {
public:
    static int count;

    Student() {       // A static variable is shared by all objects of the class.
    count++;          //Only one copy exists in memory.
    }
};

int Student::count = 0;
int main(){
    /*
    static keyword = The static keyword changes the lifetime and behavior of variables or functions.


    // */
    // func();
    // func();
    // func();

    Student s1;
    Student s2;
    Student s3;

    cout << Student::count;
}