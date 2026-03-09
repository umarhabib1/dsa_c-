#include <iostream>
using namespace std;

int main(){
    //    rows| cololums 
    // int arr[2][4] = {{1,2,3,4},
    //                  {5,6,7,8}};
  
    //  int rows = sizeof(arr)/sizeof(arr[0]);
    //  int columns = sizeof(arr[0])/sizeof(arr[0][0]);

    //  for (int i = 0; i < rows; i++)
    //  {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         cout<<arr[i][j];
    //     }
        
    //  }
     
    // cout<<arr[0][0];
    // cout<<arr[0][1];
    // cout<<arr[0][2];
    // cout<<arr[0][3];
    // cout<<arr[1][0];
    // cout<<arr[1][1];
    // cout<<arr[1][2];
    // cout<<arr[1][3];

    

    // problem 1: Given a 2D array of size 3 x 3, print all elements row by row.
    // int array[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<array[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    



    // problem 2: Write a program to calculate the sum of all elements in a 2D array.

    // int array[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    // int sum =0;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += array[i][j];
    //     }
        
    // }
    // cout<<sum;




    // problem 3: Input a 3×3 matrix . Find Sum of Each Row
    
    // int matrix[3][3];

    // cout << "Enter elements of 3x3 matrix:\n";
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>matrix[i][j];
    //     }
        
    // }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += matrix[i][j];
    //     }
    //     cout<<"sum of row number  "<<i+1<< " = "<<sum<<endl;
    // }


    // problem 4: find the  Sum of Each Column

    // int array[3][3] ={{1,2,3},
    //                  {0,5,6},
    //                  {0,8,9}};
    
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum =0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += array[j][i];
    //     }
    //     cout<<"sum of row number  "<<i+1<< " = "<<sum<<endl;
        
    // }
    


 // problem 5: Find Largest Element in an 2D array

//  int array[3][3] ={ {1,2,3},
//                     {4,5,6},
//                     {7,8,9}};

//     int largest= array[0][0];

//     for (int i = 0; i < 3; i++)
//      {
//         for (int j = 0; j < 3; j++)
//         {
//             if (array[i][j] > largest)
//             {
//                 largest = array[i][j];
//             }
            
            
//         }
        
//      }
                     
//     cout<<largest;


    // problem 6: Transpose of Matrix Convert rows into columns.
    int array[3][3] ={ {1,2,3},
                    {4,5,6},
                    {7,8,9}};

    int transpose[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = array[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
          cout << endl;
    }
    
    
    









  
    
    
        
    return 0;
}