#include <iostream>
using namespace std;
void bakePIzza(){
    cout<<"Here is your pizza";
}
void bakePIzza(string topping1){
    cout<<"Here is your" <<topping1<<" pizza";
}
void bakePIzza(string topping1, string topping2){
    cout<<"Here is your"<<topping1<<"and"<<topping2<<  "pizza";
}
int main(){
    //  over Loaded fuction
    // function signature  =  a functio name and its peramater 
    
    bakePIzza();
    cout<<endl;
    bakePIzza("pepperoni");
    cout<<endl;
    bakePIzza("pepperoni","mushroom");

}