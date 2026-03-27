#include <iostream>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;

    Pizza(){
        
    }
    Pizza(string topping1){
        this->topping1 = topping1;  // “Assign the parameter topping1 to the object's topping1.”
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {

    /*
    Constructor Overloading = Constructor Overloading means having  
     more than one constructor in the same class with different parameters (number or type).
    */

    /*
    this = this is a special pointer automatically available inside non-static member functions, 
    and it points to the object that calls the function.
    */


    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;


    return 0;
}