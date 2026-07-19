#include <iostream>
#include <list>
using namespace std;

int main(){
    /*
    list in C++ STL:
                  A list is an STL container that stores elements in a doubly linked list.
                Unlike a vector, the elements of a list are not stored in contiguous (continuous) memory.
    */
    list<int> a = {1,2,1};
    a.push_front(1);
    a.pop_back();
    a.push_back(2);
    a.push_front(9);
    a.pop_front(); 

    for(int val : a){
        cout<<val<<" ";
    }
}