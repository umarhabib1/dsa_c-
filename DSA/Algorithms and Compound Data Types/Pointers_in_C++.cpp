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
    // int* ptr1;
    // cout<<"ptr1 = "<<ptr1<<endl;   // it would print grabage value
    
    // int* ptr2 = NULL;
    // cout<<"ptr2 = "<<ptr2<<endl;  // it would not print grabage value or it does print anything



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


   ///////// Arrays Pointers //////////////
//    int arr[] = {1,2,3,4,5,6};
//    cout<<arr;   // points to the first index of the array
//    cout<<*arr;




  ///////  Pointers Arthematic ///////
//   Pointer arithmetic means:
// Moving pointers through memory.
// Pointers can move to the next or previous memory locations depending on the data type.

//   int a = 10;
//   int* ptr = &a;
//   ptr++;
//   cout<<ptr<<endl;
//   ptr--;
//   cout<<ptr<<endl;

//   int arr[] = {1,2,3,4,5,6};
//   int* ptr = arr;   
//   cout<<*(ptr)<<endl;    //   *ptr = arr[0]
//   cout<<*(ptr+1)<<endl;    //   *ptr+1 = arr[1]
//   cout<<*(ptr+2)<<endl;    //   *ptr+2 = arr[2]
//   cout<<*(ptr+3)<<endl;    //   *ptr+3 = arr[3]
//   cout<<*(ptr+4)<<endl;    //   *ptr+4 = arr[4]
//   cout<<*(ptr+5)<<endl;    //   *ptr+5 = arr[5]
//   ptr++;  // ptr = arr[1]
//   cout<<*(ptr -1)<<endl; //ptr= arr[0]


// int* ptr1;// 100                   1 integer = 4bytes
// int* ptr2 = ptr1 +2;// 108
// cout<<ptr2 - ptr1;// 8 bytes = 2 int

int* ptr1;
int* ptr2;
cout<< (ptr2 > ptr1);   // if true = 1  or if false = 0

}