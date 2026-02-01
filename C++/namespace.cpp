#include <iostream>
using namespace std;
namespace first{
    int x =3;
}
namespace second{
    int x = 99;
}
int main(){
    using namespace second;
    cout<< x<<endl;
    cout<< first:: x <<endl; 
    cout<< x<<endl;
    
    int x = 1;
    
}