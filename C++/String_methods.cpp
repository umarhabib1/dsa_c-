#include <iostream>
using namespace std;

int main(){
 

    //Strings methods
    // (1)  name.lenght()
    // (2)  name.empty()
    // (3)  name.clear() 
    // (4)  name.append()
    // (5)  name.at()
    // (6)  name.insert()
    // (7)  name.find()
    // (8)  name.erase()




    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    // if (name.length() > 12)
    // {
    //     cout<<"your name can not be greater than 12 character ";
    // }else{
    //     cout<<"Welcome: "<<name<<endl;
    // }
    
    // if (name.empty())
    // {
    //     cout<<"plz Enter your name";
    // }else{
    //     cout<<"Welcome "<<name;
    // }

    // name.clear();
    // cout<<"hello"<<name;
    
    // name.append("gmail.com");
    // cout<<name;

    // cout<< name.at(1);


    // name.insert(0,"@");
    //  cout<< name;



    // cout<<name.find("k");
    

    name.erase(0,3);
    cout<<name;

}
