#include <iostream>
using namespace std;

template <typename T>

    T myMax(T x , T y){
        if (x > y)
        {
            return x;
        }else if (x == y)
        {
            return x+y;
        }
        
        return y;
    }




    // int max(int x , int y){
    //     return x+y;
    // }
int main(){
    /*
    A function template allows you to write a single function that works with different data types
     (like int, double, string, etc.).

    Instead of writing separate functions for each type, you write one generic function.
    */

    // int x =3 , y = 2;    
    // double x =3.3 , y = 3.3;
    // char x ='3' , y = '2';
    string x ="hello" , y = "i am you ";
    cout<< myMax(x,y);
    
}