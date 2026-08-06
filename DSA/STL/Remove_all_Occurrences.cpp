#include <iostream>
using namespace std;

int main(){
    string str = "dsabcsdgabcjjlabc";
    string part = "abc";

    while (str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.size());
        
    } 
    cout<<str;
}