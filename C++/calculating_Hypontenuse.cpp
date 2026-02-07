#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double height,base;
    cout<<"Enter height: "<<endl;
    cin>>height;

    cout<<"Enter base: ";
    cin>>base;

    double hyp = sqrt(pow(height, 2) + pow(base, 2));
    

    cout<<"Hypontenuse = "<< hyp<<endl ;
    cout<<"Estimated Hypontenuse = "<<round(hyp);
    
    

}