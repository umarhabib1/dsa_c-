// REFERENCE version
// #include <iostream>
// using namespace std;

// void printhello(){
//     cout << "hello";
// }

// int* add(int &a, int &b){
//     int* c = new int;
//     *c = a + b;
//     return c;
// }

// int main(){
//     int a = 2;
//     int b = 6;

//     int* ptr = add(a, b);
//     printhello();
//     cout << *ptr << endl;

//     delete ptr; // VERY important
// }

  //////////////////////////POINTER version////////////////
// #include <iostream>
// using namespace std;
// void printhello(){
//     cout<<"hello";
// }
// int* add(int* a,int *b){
//     int* c ;
//     *c = (*a) + (*b);
//     return c;
// }
// int main(){
//    int a = 2;
//    int b = 6;
//    int* ptr = add(&a,&b);
//    printhello();
//    cout<<*ptr<<endl;   
//    delete ptr;
// }