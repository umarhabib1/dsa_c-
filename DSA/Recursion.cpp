#include <iostream>
using namespace std;

void printNumber(int n){
if (n == 1)    // base case
{
    cout<<1<<" ";      
    return;
}
printNumber(n-1); // recursive case 
cout<<n<<" ";
}

int factorial(int n){
    if (n == 1)
    {
        return 1;
    }
    
    return n * factorial(n -1);
}

int sumOfN(int n){
    if (n == 1)
    {
        return 1;
    }
    
    return n + factorial(n -1);
}

int main(){
    // printNumber(5);

    // cout<< factorial(4);

    cout<< sumOfN(4);
}