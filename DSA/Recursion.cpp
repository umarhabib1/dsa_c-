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
int main(){
    
    printNumber(5);
}