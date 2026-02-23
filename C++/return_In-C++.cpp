#include <iostream>
using namespace std;

double square(double side){
    return side*side;
}
double cube(double lenght){
    return lenght*lenght*lenght;
}
string full_Name(string first, string second ){
  return first +" "+ second;
}

int main(){
    // return = return a value back to the spot
    //          where you called the encompassing function

    double lenght = 5.0;
     
    double area =square(lenght);
    double volume =cube(lenght);
     cout<<area<<"cm^2"<<endl;
     cout<<volume<<"cm^3"<<endl;
     
    string first_name = "bro";
    string last_name = "code";
    string full_name =full_Name(first_name,last_name);
    cout<<full_name;
    return 0;
}