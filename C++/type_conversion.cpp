#include <iostream>
using namespace std;

int main(){
    //type conversion  = conversion a value of one data type to another
    //  there are two ways:
    //                        implicit = automatic
    //                        Explicit = Preced value with new data type  (int)
    
    // double x = (int) 3.99;   //  Explicit
    // cout<< x <<endl;

    // char y = 100;      //implicit
    // cout<< (char) 100;       // Explicit
    // cout<< y <<endl;   // it print d  because 100 conveted to character is equal to d  

    int correct = 8;
    int question = 10;
    double score =  correct/ (double) question *100;
    cout<< score <<"%";
      
}             