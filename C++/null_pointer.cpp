#include <iostream>
using namespace std;

int main(){
    // null value = A null value means:
            // “No value” or “Empty reference”

    // null pointer = A null pointer is a pointer that does not point to any valid memory location.
// It means:
// “This pointer is empty. It is not pointing to anything.”



int* ptr = nullptr;
int x = 123;

// ptr = &x;

if (ptr == nullptr)
{
    cout<<"address was not assigned"<<endl;
    // cout << *ptr;   // ❌ ERROR         Segmentation fault / Crash
//                                         Because you're trying to read memory that doesn't exist.
}else{
    cout<<"address was  assigned"<<endl;
    cout << *ptr;   
}





}