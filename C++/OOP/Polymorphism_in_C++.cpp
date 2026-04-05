#include <iostream>
using namespace std;
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main(){
/*
Polymorphism:-

 The word polymorphism means:    “Many forms”

Polymorphism allows the same function name or operator to perform different tasks depending on context.
*/


    Math m;
    cout << m.add(2,3) << endl;
    cout << m.add(2,3,4);
    }