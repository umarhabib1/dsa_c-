#include <iostream>
using namespace std;

int main(){

    //memory address = a location  in memory  where data is stored
    // a memor adress can be accessed with & (address-of-operator)

    string name = "Bro";
    int age = 99;
    bool student = true;

    cout<<&name<<endl;
    cout<<&age<<endl;
    cout<<&student<<endl;

}
