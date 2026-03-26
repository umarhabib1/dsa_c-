#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    void dispaly_name(){
        cout<<" name is "<<name;
    }
    private:
    int Rollnumber = 23;   // it is private so i can only access it in side a class

    void dispaly_rollnumber(){
        cout<<" Rollnumber is "<<Rollnumber;
    }

    protected:
    double Gpa = 3.7;
    

    void dispaly_Gpa(){
        cout<<" Gpa is "<<Gpa;
    }


};

class child :  public Student{      // child declaration
    public:
   void Show_Gpa(){
     cout<<"Gpa ="<<Gpa;
   }
   
};


int main(){
    /*
    Access Specifiers= Access specifiers control who can access class members (variables & functions).

There are 3 types:

1️⃣ public
✅ Accessible from anywhere (inside & outside the class)



2️⃣ private
🔒 Accessible only inside the class



3️⃣ protected

🔐 Accessible:
Inside the class

Inside derived (child) classes

Not accessible outside.
    */


    Student student_1;   // object creation

    student_1.name= "umar";  // i can access it because it public
    cout<<student_1.name;      // i can access it because it public
    student_1.dispaly_name();



    // student_1.dispaly_rollnumber();   // display gives  error because it is private
    // stsudent_1.Rollnumber = 00001;  // it gives  error because it is private


    // student_1.Gpa =3.9; // it gives error beacuse it is protected we can only access it
                           // inside a class or in its child
    // student_1.dispaly_Gpa();  // it also gives error beacuse it is protected


    child c1;      // create object of child
c1.Show_Gpa(); 

}