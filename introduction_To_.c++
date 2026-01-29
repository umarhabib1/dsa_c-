#include <iostream>
using namespace std;
int main(){
    // printf("it's umar ");
    // return 0;

    // int a; // varible declaration
    // char c;
    // float real_number;

    // a =56;
    // c = 'a';
    // real_number = 9.99;
    // printf("%d",a);
    // return 0;

    // int a,b ,c;
    // // a = 12;
    // // b=14;
    // c=a*b;
    // printf("a = %d, b = %d, a*b = %d" ,a,b,c);
    // return 0;

    float a,b,sum,diff,product,c;
    cout <<"Enter a";
    cin>>a;
    cout <<"Enter b";
    cin>>b;
    sum = a+b;
    diff = a-b;
    product = a*b;
    c = a/b;

    cout << "\na = " << a << ", b = " << b << ", a + b = " << sum << endl;
    // cout << "a = " << a << ", b = " << b << ", a - b = " << diff << endl;
    // cout << "a = " << a << ", b = " << b << ", a * b = " << product << endl;
    // cout << "a = " << a << ", b = " << b << ", a / b = " << c << endl;

    return 0;
}