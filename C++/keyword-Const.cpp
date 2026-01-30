#include <iostream>
using namespace std;
int main(){
    //const in C++ is a keyword (not a datatype) that makes a variable or object read-only. Once you assign a value to it, you cannot change it later.
    const double PI = 3.14;
    const double speedLight =299792458;

    // PI = 34;  //this will give an error because we cant change the value of constant variable
    // cout<< PI << endl;      

    int x = 10;
const int* ptr = &x; // you cannot change the value of x through ptr
// *ptr = 20; // this will give an error
cout << "Value of x through ptr: " << *ptr << endl;
    

    return 0;   
}