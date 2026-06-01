#include <iostream>
using namespace std;

int main(){

    // 1. & Address-of Operator
    // Gets memory address.
    // 2. * Dereference Operator
    // Accesses value stored at the address.

    // int a = 10;

    // int* p = &a;

    // cout << "a = " << a << endl;

    // cout << "Address of a = " << &a << endl;

    // cout << "Pointer p stores = " << p << endl;

    // cout << "Value using pointer = " << *p << endl;


    // int a =10;
    // int* ptr1 = &a;
    // cout<<ptr1<<endl;
    // cout<<&a<<endl;
    // int** ptr2  = &ptr1;
    // cout<<"address of ptr1 = "<<ptr2<<endl;
    // cout<<"address of a = "<<*ptr2<<endl;   
    // cout<<"value of a = "<<**ptr2<<endl;

    /////NULLPointer//////////
    int* ptr1;
    cout<<"ptr1 = "<<ptr1<<endl;   // it would print grabage value
    
    int* ptr2 = NULL;
    cout<<"ptr2 = "<<ptr2<<endl;  // it would not print grabage value or it does print anything
}