#include <iostream>
using namespace std;
void print(char *c){
    int i = 0;
    while (*(c+i) != '\0')
    {
      cout<<c[i];
      i++;
    }
    cout<<endl;
}
int main(){
    // char c[] ={'u','m','a','r','\0'};
    char c[] ="umar";
    print(c);
    // cout<<c;
}