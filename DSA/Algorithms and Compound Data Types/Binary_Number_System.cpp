#include <iostream>
using namespace std;
int decTOBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum>0)
    {
        int rem = decNum %2;
        decNum /= 2;
        ans += rem*pow;
         pow*=10;
    }
    return ans;
}

void toDecNum(int binary){
   int ans = 0 ; int pow = 1;
   while (binary > 0)
   {
    int rem = binary%10;
    ans += rem * pow;
    binary/=10;
    pow*=2;
   }
   cout<<ans;
}

int main(){
    int decNum = 50;
    // cout<< decTOBinary(decNum);
    int binary = 101;
    toDecNum(binary);
}