#include <iostream>
using namespace std;

// int findNum(int array[],int size,int element){

//     for (int i = 0; i < size; i++)
//     {
//             if (array[i]== element)
//             {
//                 return i;
//             }
            
//     }
    
//     return -1;
// }

int getfood(string array[],int size,string element){

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
        
    }
    return -1;

}

int main(){

    // int number[]={1,2,3,4,5,6,7,8,9};
    // int size = sizeof(number)/sizeof(int);
    // int myNum;
    // cout<<"enter a number to search for in the array  "<<endl;
    // cin>>myNum;

    // int index = findNum(number,size,myNum);
    // if (index != -1)
    // {
    //     cout<<"the number "<< myNum<< " is it "<<index<<" index";
    // }else{
    //     cout<<"Number was not found in the array";
    // }


    string foods[] ={"pizza","rice","egg","cake","french fries"};
    int size = sizeof(foods)/sizeof(string);
    string myfood;
    cout<<"enter a food name to search for in the array  "<<endl;
    getline(cin,myfood);

    int  index = getfood(foods,size,myfood);
    if (index != -1)
    {
        cout<<"the food "<< myfood<< " is it "<<index<<" index";
    }else{
        cout<<"Number was not found in the array";
    }


}