#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    /*
    ✅ 1. Time Complexity
📌 Definition
Time Complexity tells us how much time an algorithm takes to run as the input size increases.
👉 It does NOT mean actual seconds or minutes.
👉 It measures number of operations.


✅ 2. Space Complexity
📌 Definition
Space Complexity tells us how much memory (RAM) an algorithm uses.
It includes:
Variables
Arrays
Function calls (recursion stack)
    */

    /*
    
✅ Big-O Notation
📌 Definition
Big-O notation is a way to describe how fast an algorithm grows when the input size (n) increases.
👉 It shows the worst-case performance of an algorithm.
👉 It ignores small details and focuses on growth rate.

🔹 Why do we use Big-O?
Computers have different speeds, so instead of measuring seconds, we measure:
✅ Number of operations
✅ Growth of algorithm with large input

🔹 Basic Idea
If input size increases:
How much slower does the program become?
Big-O answers this question.
    */


 /////////////////   //Common Time Complexities    ///////////////////
//  k = constant


///////////////////////  Time Complexity = O(1)  ///////////////////////////

//  int n;
// cin>>n;
// //  1. sum of numbers from 1 to N
// int ans = n * (n+1)/2; // k
// //  Time Complexity = O(1)


////////////////////  Time Complexity O(n)   ////////////////////

// //  N factorial
// int fact =1;  // k
// for (int i = 1; i <=n; i++) // n
// {
//     fact *= i; // k
// }
// //  Time Complexity = O(n)




/////////////////////////  Time Complexity = O(n²) or O(n^2)  ///////////////////
// int arr[] = {1,2,3};
// int n = sizeof(arr) / sizeof(arr[0]);

// for (int i = 0; i < n; i++) // n
// {
//     for (int j = 0; j < n-1; j++)  // n
//     {
//         if (arr[j] > arr[j+1]) // k
//         {
//             swap(arr[j],arr[j+1]); // k
//         }   
//     }
// }
// Time Complexity = O(n²) or O(n^2)


// ///////////////////// problems ////////////////////////////////

// prime numbers
int n = 37;
for (int i = 2; i*i<= n; i++)
{
    if (n%i == 0)
    {
        cout<<n<<" is not a prime number";
        break;
    }else{
           cout<<n<<" is  a prime number";
        break;
    }
    
}




}