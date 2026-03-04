#include <iostream>
using namespace std;

// double getTotal(double arr[], double size){
//     double total =0;

//     for (int i = 0; i < size; i++)
//     {
//         total += arr[i];
//     }
    
//     return total;
// }


// int findSum(int arr[],int size){
//     int sum =0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//      return sum;
// }




// int findLargest(int * arr, int size){
//     int largest = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (largest < arr[i] )
//         {
//             largest =  arr[i];
//         }
        
//     }
    
//     return largest;
// }




int secondLargest(int arr[], int size){
        int temp;
        int largest = arr[0];
        int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i] )
        {
            largest =  arr[i];
        }
        if (smallest < arr[i])
        {
            smallest = arr[i];
        }
        if (smallest > largest)
        {
            
            temp = largest;
            largest = smallest;
            smallest =  temp;
        }
        
        
    }
    
return smallest;
}





int main(){

    // double price[] = {23,342,13,45.34,23.33};
    // int size = sizeof(price)/ sizeof(double);

    // double total = getTotal(price,size);

    // cout<<total;



    // problem 1:  write a fuction to find the sum of an array
    // int arr[] = {1,2,3,4,5,6};
    // int size = sizeof(arr)/ sizeof(arr[0]);
     
    // cout <<findSum(arr,size);




    // problem 2: write a fuction to find the Largest number
    // int arr[] = {1,2,3,4,5,6};
    // int size = sizeof(arr)/ sizeof(arr[0]);
    // cout <<findLargest(arr,size);





    // problem 3:  write a fuction to find the Second Largest number
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/ sizeof(arr[0]);
    cout<<secondLargest(arr,size);     



    return 0;
}
