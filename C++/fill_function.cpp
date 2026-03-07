#include <iostream>
using namespace std;

int main(){
  int i =1;
    string array[100];

    fill(array,(array+100/3)," Goat");
    fill((array+100/3),(array+100/3*2)," cow");
    fill((array+100/3*2),array+100," dog");

    for (string elements : array)
    {
        cout<<i;
        i++;
        cout<<elements<<endl;
    }
    
    return 0;
}