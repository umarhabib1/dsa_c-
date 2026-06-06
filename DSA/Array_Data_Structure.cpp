#include <iostream>
using namespace std;

// void changeArr(int* arr,int size){
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2* arr[i];
//     }
// }

// int linerSearch(int* arr,int size,int target){
//     for (int i = 0; i <= size ; i++)
//     {
        
//         if (arr[i] == target)
//         {
//             return i;
//         }
        
//     }
//     return -1;
// }

// void reverseArray(int* arr,int size){
//     int start =0, end = size -1;
//     while (start < end)
//     {
//         // swap(arr[start],arr[end]);
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }   
// }

// void sumAndProduct(int* arr , int size){
//     int sum = 0,Product = 1;
//      for (int i = 0; i < size ;i++)
//      {
//         sum += arr[i];
//         Product *= arr[i];
//      }
//      cout<<sum<<endl;
//      cout<<Product;
// }


// void swapMixMin(int* arr ,int size){
//     int start =0, end = size -1;
//     for (int i = 0; i < 1; i++)
//     {
//      swap(arr[start],arr[end]);
//      start++;
//      end--;
//     }
// }


void uniqeNumbers(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i]==arr[j])
            {
                isUnique = false;
                break;
            }
         
        }
               if(isUnique) {
            cout << arr[i] << " ";
        }
    }
    
}


int main(){
    // int number[9] ={1,2,3,4,5,6,7,8,9};
    // int size = sizeof(number) / sizeof(int);

    // number[0] = 0; 
    // cout<<number[0];

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<number[i]<<" ";
    // }
    
    // int number[5];
    // cout<<"enter 5 numbers"<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>number[i];
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<number[i]<<" ";
    // }
    
  
    // Q1. find the largest and smallest number in an array

    // int number[9] ={112,2,6,5,32,6,30,8,19};
    // int largest = 0;
    // int smallest = INT_MAX;

    // for (int i = 0; i < 9-1; i++)
    // {
    //     if (largest < number[i] )
    //     {
    //         largest = number[i];
    //     }
    //     if (smallest > number[i])
    //     {
    //         smallest = number[i];
    //     }
        
        
    // }
    // cout<<largest<<endl;
    // cout<<smallest;
 

    // pass by referance
    // int arr[] = {1,2,3,4};
    //  int size = sizeof(arr) / sizeof(arr[0]);
    // changeArr(arr,size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // liner search 
    // int arr[] = {4,2,7,8,6,2,5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int target = 2;

    // cout<<linerSearch(arr,size,target); 


    // Reverse an array
    // int arr[] = {1,2,3,4,5,6};
    // int size = sizeof(arr) / sizeof(arr[0]);

    // reverseArray(arr,size);
       
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i];
    // }
    
        

    // WAF to calculate the sum and product of all elements in a array
    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // sumAndProduct(arr, size);


    // WAF to swap the mix and min number of an array
    // int arr[] = {5,2,3,4,1};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // swapMixMin(arr, size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i];
    // }



    // WAF to print all the uniqe numbers in ar array
    int arr[] = {1,2,3,4,5,1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    uniqeNumbers(arr, size);




}