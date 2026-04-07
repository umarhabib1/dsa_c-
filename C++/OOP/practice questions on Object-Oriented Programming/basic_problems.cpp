#include <iostream>
using namespace std;
// class Student{
//     public:
//     string name;
//     int rollNumber;
//     void display(){
//         cout<<"Name is = "<<name<<endl;
//         cout<<"roll number = "<<rollNumber<<endl;
//     }
// };

// class Rectangle{
//     public:
//     double lenght;
//     double width;
//     void area(){
//         cout<<lenght*width <<endl;
//     }
// };


// class Car{
//     public:
//     string brand;
//     string model;
//     int year;
//     void showDetails(){
//         cout<<"brand = "<<brand<<endl;
//         cout<<"model = "<<model<<endl;
//         cout<<"year = "<<year<<endl;
//     }

// };

// class Book{
//     public:
//     string title;
//     double price;
//     Book(){
//         title = "Book of Nothing";
//         price = 435.5;
//     }
// };

// class Circle{
//     public:
//     double radius;
//     Circle(double r){
//         radius = r;
//         cout<<"Circle area  = "<<3.14*r*r;
//     }
// };



// class Student{
//     public:
//     string name;
//     int rollNumber;
//     static int count;
//     void total(){
//         cout<<"total student = "<<count;
//     }
//     Student(){
//         count++;
//     }
// };
// int Student::count = 0;



class Animal{
    public:
    void eat(){
        cout<<"Is eating";
    }
};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"Dog is barking";
    }
};
int main(){
    /*
    Q1

Create a class Student with:

name

roll number

Create a function display() to print the data.

Create two objects and print their data.*/

// Student s1 = {"someone",20};
// s1.display();
// Student s2 = {"?????",21};
// s2.display();





/*
Q2

Create a class Rectangle with:

length

width

Create a function area() that returns the area.*/

// Rectangle r1 = {2,5};
// r1.area();




/*
Q3

Create a class Car with:

brand

model

year

Create a function showDetails() to print the car details.*/

// Car c1 ={"somecar","v3",2030} ;
// c1.showDetails();






/*
Q4

Create a class Book with:

title

price

Use a constructor to initialize them.*/

// Book b1;
// cout<<"title = "<<b1.title<<endl;
// cout<<"price = "<<b1.price<<endl;



/*Q5

Create a class Circle with:

radius

Use a constructor and create a function to calculate area of circle.
*/
// Circle c1(2.3);




/*
Q6

Create a class Student that contains:

name

roll number

static variable count

Every time an object is created, increase the count.

Print total students.*/

// Student s1;
// Student s2;
// Student s3;
// s1.total();




/*
Q7

Create a base class Animal

Function:

eat()

Create a derived class Dog

Function:

bark()

Call both functions.*/

Dog d1;
d1.bark();
d1.eat();

}