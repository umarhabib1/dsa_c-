#include <iostream>
using namespace std;
int main(){

    int a = 1025;
    int* p;
    p = &a;
    cout << p;
    cout << "size of integer %d is byte \n"<<sizeof(int)<<endl;
    cout << "adress = %d , value  = %d"<<p<<*p<<endl;
    cout << "adress = %d , value  = %d"<<p+1<<*(p+1)<<endl;
    char *p1;
    p1 = (char*)p;
    
    cout << "size of char %d is byte \n"<<sizeof(char)<<endl;
    cout << "adress = %d , value  = %d"<<p1<<*p1<<endl;
    cout << "adress = %d , value  = %d"<<p1+1<<*(p1+1)<<endl;
}