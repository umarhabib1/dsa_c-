#include <iostream>
using namespace std;

// void swap(string x,string y){
//     string temp;
//     temp =x;                //
//     x = y;                  //  Call or pass by value
//     y =x;
//     // cout<<x<<endl;

// }



void swap(string &x,string &y){
    string temp;
    temp =x;                //
    x = y;                  //  Call or pass by reference
    y = temp;
    // cout<<x<<endl;

}

int main(){
    string x = "fire";
    string y = "water";
      
    // swap(x,y);   // Call or pass by value

    swap(x,y);    //    Call or pass by reference

    cout<<x<<endl;
    cout<<y<<endl;
}