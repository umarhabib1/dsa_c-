#include <iostream>
using namespace std;
void sum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout<<sum;
}

void factorial(int n){
    int factorial = 1;
    for (int i = 1;i <= n; i++)
    {
        factorial *= i;
    }
    cout<<factorial;
}

void sumNum(int n){
    int num = 0;
    for (int i = 0; n > 0; i++)
    {
        int lastnum =n%10;
        n /= 10;
        num+=lastnum;
    }
    cout<<num;
}

int main(){
    // sum(1);
    // factorial(4);
    sumNum(123);
    
}