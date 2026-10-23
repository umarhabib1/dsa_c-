#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // int n = 4;
    // int arr[4] = {2,7,11,15};
    // int target = 9;
    // int end = n-1;
    // int st = 0;
    //     vector<int> ans;

    //     while (st <end)
    //     {
    //         if (arr[st]+arr[end] > target)
    //         {
    //             end--;
    //         } 
    //         if (arr[st]+arr[end] < target)
    //         {
    //             st++;
    //         }
    //         if (arr[st]+arr[end] == target)
    //         {
    //             ans.push_back(arr[st]);
    //             ans.push_back(arr[end]);
    //             break;
    //         }
            
    //     }
        

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[i]+arr[j]==target)
    //         {
    //             ans.push_back(arr[i]);
    //             ans.push_back(arr[j]);
    //         }
    //     }
        
    // }

    // for (int i : ans)
    // {
    //     cout<<i;
    // }
    
    
    //  if (ans.size() > 0) {
    //     cout << "Pairs found: ";
    //     for (int i = 0; i < ans.size(); i += 2) {
    //         cout <<"value = " << "(" << ans[i] << "," << ans[i + 1] << ") ";
    //     }
    //     cout << endl;
    // } else {
    //     cout << "No pairs found" << endl;
    // }




    // Majority Element 

    
    // int arr[] ={3,1,2,1,2,2,1,1,3};
    //  int n = sizeof(arr) / sizeof(arr[0]);

    //   for (int i = 0; i < n; i++)
    //    { int f = 1;
    //      for (int j = 0; j < n; j++)
    //       { if (arr[i] == arr[j])
    //          { f++; } 
    //         } if (f > n/2)
    //          { 
    //             cout<<arr[i]; break; 
    //         }
    //          }
    


// int arr[] = {1,1,1,2,2,3,3,3,32,2,2,2,3,3,3,2,2,2,2,2,2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     sort(arr, arr + n);   // ascending order
//     int f = 1;
    
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i-1])
//         {
//             f++;
//         }else
//         {
//             f = 1;
//         }

//         if (f > n/2)
//         { 
//                 cout<<arr[i]; 
//                 break;
//         }
 

//     }



//Moore's Voting Algorithm
int n = 5;
int arr[5] = {3,2,3,3,2};
int frq = 0;
int ans;

for (int i = 0; i < n; i++)
{
    if (frq == 0)
    {
        ans = arr[i];
    }
     if (ans == arr[i])
    {
        frq++;
    }if (ans != arr[i])
    {
        frq--;
    }

}
// Step 2: Verify candidate
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ans)
            count++;
    }

    if (count > n/2)
        cout << "Majority Element = " << ans;
    else
        cout << "No Majority Element";



}