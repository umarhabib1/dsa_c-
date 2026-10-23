#include <iostream>
using namespace std;

int main(){
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