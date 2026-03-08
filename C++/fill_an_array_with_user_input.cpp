#include <iostream>
using namespace std;    

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<endl;
    string array[n];
    int size =sizeof(array)/sizeof(string);
    string temp;
    cin.ignore();



    for (int i = 0; i < size; i++)
    {
        cout<<"enter a food you like or Enter q to quite : "<< i+1;
        getline(cin,temp);
        if (temp == "q")
        {
            break;
        }else{
            array[i] = temp; 
        }
        
    }

    cout<<"ypu love the following foods";
    for (int i = 0; !array[i].empty(); i++)
    {
        cout<<array[i]<<endl;
    }
    
    

}