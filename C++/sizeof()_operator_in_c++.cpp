#include <iostream>
using namespace std;

int main(){
    // sizeof() = determines  the size in bytes of a
    // variable,datatype,class,object,etc

    string name ="bro";
    cout<<sizeof(name)<<endl;
    
    int a =23;
    cout<<sizeof(a)<<endl;

    char b ='v';
    cout<<sizeof(b)<<endl;

    int c[] ={1,2,3,4,5};
    int size = sizeof(c)/ sizeof(int) ;
    cout<<sizeof(c)<<endl;
    cout<<size<<endl;
    
}
