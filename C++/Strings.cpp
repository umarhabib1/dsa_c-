#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    // cout << "What is you name:  ";
    // cin >> name;

    cout<<"what is your fullName ";
    std::getline(cin,name);

    cout<<"what is your age ";
    cin>>age;
    cout << "hello your name is  " << name<<" and your age is " <<age<<endl;
}