#include <iostream>
using namespace std;

void Reverse(int num){
    int number = 0;
     while (num  > 0)
     {
        int n = num%10;
        number = number *10 +n;
        num /=10;
     }
     cout<<number;
}
int main()
{
    /*
    Bitwise operators work directly on binary (bits: 0 and 1) of numbers.

    👉 They compare each bit of two numbers.
    */

    // Types of Bitwise Operators

    //   1. AND (&)
    // 👉 Rule:
    // 1 & 1 = 1
    // Otherwise = 0

    // cout<<(5 & 3);                 //  101    = 5
    //   011     = 3
    //    001    = 1

    //     2. OR (|)
    // 👉 Rule:
    // If any bit is 1 → result = 1

    // cout<<(5 | 3);                 //  101    = 5
    //   011     = 3
    //   111    = 7

    // 3. XOR (^)
    // 👉 Rule:
    // Same bits → 0
    // Different bits → 1

    // cout<<(5 ^ 3);                 //  101    = 5
    //   011     = 3
    //   110    =  6

    //     4. NOT (~)
    // 👉 Rule: Flip bits
    // 1 → 0
    // 0 → 1

    // cout<<(~5 );                 //  00000101 = 5
    // 11111010  = -5

    // 5. Left Shift (<<)
    // 👉 Moves bits left (adds zeros on right)
    // cout<<(4<<3);    // 4 =  100
    // 4<<1 = 1000 = 8
    // 4<<2 = 10000 = 16
    // 4<<3 = 100000 = 32

    // Right Shift (>>)
    // 👉 Moves bits right
    // cout << (4 >> 3); // 4 =  100
    //                   // 4>>1= 10 = 2
    //                   // 4>>2= 1 = 1
    //                   // 4>>3= 0 = 0
    //                   // 4>>4= 0 = 0

    // short int a = 1000;       // Short integer
    // long int b = 1000000;     // Long integer
    // unsigned int c = 4000000; // Only positive numbers
    // signed int d = -50;       // Can be negative or positive

    // cout << a << " " << b << " " << c << " " << d;


    int n = 123;
    Reverse(n);

return 0;
}