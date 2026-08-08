#include <iostream>
using namespace std;
// bool isPrime(int n)
// {
//     if (n < 1)
//     {
//         return false;
//     }

//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % 2 == 0)
//             return false;
//     }
//         return true;
// }

// void printDight(int n){
//     while (n != 0)
//     {
//         int digit = n % 10;
//         cout<<"num = "<<digit<<endl;

//         n = n/10;
//     }
    
// }

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int digit = n%10;
        sumOfCubes += (digit*digit*digit);
        n /= 10;
    }
    return sumOfCubes == copyN;
}

int main()
{
    //  int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // if (isPrime(n))
    //     cout << n << " is a Prime Number";
    // else
    //     cout << n << " is Not a Prime Number";

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // printDight(n);
    

    int n;
    cout << "Enter a number: ";
    cin >> n;
    isArmstrong(n);
    if (isArmstrong(n))
    {
        cout<<n <<" is Armstrong";
    }else{
        cout<<n <<" is not Armstrong";
    }
    
    
}