#include <iostream>
using namespace std;
int main(){
    int a[] ={1,2,3,4,5};
    int i;
    int *p =a;
    cout << a;   
    for (int i = 0; i < 5; i++)
    {
        cout <<"Address ="<<&a[i]<<endl;
        cout <<"Address ="<<a+i<<endl;
        cout <<"Address ="<<a[i]<<endl;
        cout <<"Address ="<<*(a+i)<<endl;
    }
    
}