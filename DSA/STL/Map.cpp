#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> students;
    students.insert({"umar",1});
    students.insert({"hassan",2});
    students.insert({"haider",3});
    
    cout << students["umar"];

}