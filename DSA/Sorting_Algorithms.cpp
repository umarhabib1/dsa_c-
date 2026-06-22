#include <iostream>
using namespace std;

void print(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    int arr[] = {4, 3, 2, 1, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    //////////////////////////    Bubble Sort      //////////////////////////////

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)    // optimize = j < n-i-1   & normal = j < n-1
    //     {
    //         if (arr[j] > arr[j+1])
    //         {
    //             int temp = arr[j];   //
    //             arr[j] = arr[j+1];   //   or     swap(arr[j] , arr[j+1]);
    //             arr[j+1] = temp;     //
    //         }
    //     }
    // }
    // print(n,arr);

    //////////////////////////     Selection Sort      //////////////////////////////

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (arr[j] < arr[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     swap(arr[i], arr[minIndex]);
    // }
    // print(n , arr);
    
    //////////////////////////     Selection Sort      //////////////////////////////
    
    for (int i = 1; i < n; i++)
    {
        int current = arr[i], previous = i-1;
        while (previous >=0 && arr[previous] > current)
        {
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous +1] = current;
    }
    print(n , arr);

}