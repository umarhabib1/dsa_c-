// #include <iostream>
// using namespace std;

// int Add(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     // function pointer declaration
//     int (*p)(int, int);

//     // assign function address

//     // p =&Add;
//     // or
//     p = Add;

//     // call function using pointer
//     int c = p(2, 3);

//     cout << c;
// }


#include <iostream>
using namespace std;
void hello(const char *name){
    cout<<"hello"<<name;
}
int main(){
 void (*ptr)(const char*);
 ptr = hello;
  ptr("umar");
}