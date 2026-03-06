#include <iostream>
using namespace std;

// void sort(int array[], int size) {
//     int temp;

//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (array[j] > array[j + 1]) {
//                 temp = array[j];
//                 array[j] = array[j + 1];
//                 array[j + 1] = temp;
//             }
//         }
//     }
// }

int main() {
    int array[10] = {1,3,6,2,4,5,7,9,8,10};
    int size = sizeof(array) / sizeof(int);

    // sort(array, size);        //sorting array using fuction



    // for (int i = 0; i < size-1; i++)
    // {
    //     for (int j = 0; j < size-1; j++)
    //     {
    //         if (array[j] >array[j+1])
    //         {
    //         int temp = array[j] ;
    //         array[j] = array[j+1];
    //         array[j+1] = temp;
    //         }
    //     }
        
    // }
    

    for (int element : array) {
        cout << element << " ";
    }
}
