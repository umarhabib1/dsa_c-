#include <iostream>
using namespace std;
void print(const char* a){
    while (*a != '\0')
    {
        cout << *a;
        a++;
    }
    cout<<endl;
}
int main(){
    char c[]="hello";
    print(c);
}