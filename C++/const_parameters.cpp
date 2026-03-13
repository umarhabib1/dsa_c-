#include <iostream>
using namespace std;

void function(const string name, const int age){

    // age = 34;   it canot be changed
    // nmae = " ";   it canot be changed

    cout<<name<<endl;
    cout<<age<<endl;

}

int main(){
    // const parameters  =  parameters that is effectively read-only
                           // code  is more secure & conveys intent
                           // useful for reference and pointers
    
    string name = "umar";
    int age = 330;
        function(name,age);

    return 0;
}