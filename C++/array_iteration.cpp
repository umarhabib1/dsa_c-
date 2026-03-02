#include <iostream>
using namespace std;

int main(){
    // string students[]= {"hassan","nangyal","umar"};
    // int size = sizeof(students)/sizeof(string);
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<students[i]<<endl;
    // }
    

    // problem 1: Reverse a 1D array using iteration 
    // int array[4] = {1,2,3,4};
    // int size = sizeof(array)/sizeof(int);

    // for (int i = 0; i < size / 2; i++)
    // {

    // int temp = array[i];
    // array[i] = array[size - 1 - i];
    // array[size - 1 - i] = temp;
    //          cout<<array[i];
    // }



    // problem 2:        Create an array of 6 integers. Take input from user 
    // Print all elements Print the total sum
    //  int n,sum = 0;
    // int array[6];
    // cout<< "enter your numbers";
    
    
    // for (int i = 0; i < 6; i++)
    // {
    //     cin>>n;
    //     array[i]= n;

    // }
    // cout<<endl;
    // for (int i = 0; i < 6; i++)
    // {
    //      cout<<array[i];
    //     sum += array[i];
    // }
    // cout<<endl;
    // cout<<sum;
    


    // problem 3: ✔ Find the largest element Find the smallest element Print their difference
    // int arr[] = {7, 4, 11, 9, 3, 6};
    // int size  = sizeof(arr) / sizeof(int);
    
    // int largest = arr[0];
    // int smallest = arr[0];

    
    // for (int i = 0; i < size; i++)
    // {
    //     if (largest < arr[i])
    //     {
    //         largest = arr[i] ;
    //     }else if (smallest > arr[i])
    //     {
    //         smallest = arr[i];
    //     }
            
    // }
    
    // cout<<"largest number = "<<largest<<endl;
    // cout<<"smallest number = "<<smallest<<endl;
    // cout<<"their difference is "<<largest-smallest; 




    // problem 4: Write a program to: ✔ Count how many numbers are: Even and Odd in an array
    // int arr[] = {11, 24, 35, 46, 57, 68};
    // int size = sizeof(arr) / sizeof(int);
    // int even = 0, odd = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i]%2 == 0)
    //     {
    //         even++;
    //     }else{
    //         odd++;
    //     }
        
    // }

    // cout<<"even numbers in the array were "<<even<<endl;
    // cout<<"odd numbers in the array were "<<odd<<endl;
    


    // problem 5: Reverse a array WITHOUT using another array:
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int temp;

    for (int i = 0; i < size /2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size -1 -i];
        arr[size -1 -i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }
    
    
    



}