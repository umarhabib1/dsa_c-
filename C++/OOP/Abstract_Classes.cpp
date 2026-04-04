#include <iostream>
using namespace std;

class Shape {              // Abstract class
public:
    virtual void draw() = 0;   // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle\n";
    }
};
class square : public Shape{
    public:
    void draw(){
        cout<<"Drawing a square";
    }
};
int main(){
    /*
   abstract class = An abstract class is a class that cannot be instantiated (cannot create objects) and 
   is used only as a base class.
It contains at least one pure virtual function.
    */
    /*pure virtual function = A pure virtual function is a virtual function that has no implementation in 
    the base class and must be overridden in the derived class.*/

    Circle c;
    c.draw();
    cout<<endl;
    square s;
    s.draw();
}