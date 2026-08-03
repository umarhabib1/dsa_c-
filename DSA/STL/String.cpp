#include <iostream>
#include <string>  // not compulsory
using namespace std;

int main() { 
    string s1 = "hello";
    cout<<"s1 size = "<<s1.size()<<endl;
    cout<<"s1 length = "<<s1.length()<<endl;
    cout<<"s1[1] = "<<s1[1]<<endl;

    string s2 = "My";
    string s3 = " name";
    cout<<s2 + s3<<endl;

}