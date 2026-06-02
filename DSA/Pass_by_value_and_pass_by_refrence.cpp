#include <iostream>
using namespace std;

void ChangeA(int a){ // pass by value
    a = 20;
}

void ChangeS(int* ptr){  // pass by referece by pointers
     *ptr  = 20;
}

void ChangeD(int &b){  // pass by referece by alias
     b  = 999;
}

int main(){
    
    ///// pass by value //////////

//     int a = 10;
//     ChangeA(a);
//     cout<<"change a = "<<a<<endl;

    ///// pass by Reference //////////
    // int s = 10;
    // ChangeS(&s);
    // cout<<"change s = "<<s<<endl;

     /////////// pass by reference using alias//////////////
    // alias = Another name for the same variable, type, or object.

    // int a = 1;
    // int& b = a;
    // cout<<a<<endl;
    // cout<<b<<endl;

    // int d = 10;
    // ChangeD(d);
    // cout<<"change d = "<<d<<endl;

}