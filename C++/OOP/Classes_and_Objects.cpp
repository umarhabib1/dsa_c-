#include <iostream>
using namespace std;

class student{
public:
  string name;
  int age;
  int Rollnumber;

  void display(){
    cout<<"Name is "<<name <<" age = "<< age <<" Rollnumber = "<< Rollnumber;
  }
};

int main(){

  /*
  A class is a blueprint or template for creating objects.

It defines:

✅ Variables (data)

✅ Functions (behaviors)

👉 Think of a class like a design of a car.
  */

  /*
  An object is a real instance of a class.

👉 If class = car design
👉 object = actual car 🚗
  */


    student student_1;   // object creation
    student_1.name= "umar";
    student_1.age= 15;
    student_1.Rollnumber= 1;
    student_1.display();
    cout<<endl;
    //  or  //
    student student_2 = {"hassan",15,2};
    student_2.display();

}