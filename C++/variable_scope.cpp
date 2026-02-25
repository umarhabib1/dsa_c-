#include <iostream>
using namespace std;

int num =9;

void printnum(){
    int num = 5;
    cout<< num<<endl;

}
int main(){
    int num = 2;
    cout<< num<<endl;
    cout<< ::num<<endl;   //  now it will print the global variaable

}