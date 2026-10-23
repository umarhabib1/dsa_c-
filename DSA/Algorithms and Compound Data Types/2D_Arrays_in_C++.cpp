#include <iostream>
using namespace std;

int main()
{
    // int matrix[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}};

    // int rows = 3, col = 3;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<matrix[i][j];
    //     }
    //      cout<<endl;
    // }

    // linear search
    // int key = 4;
    // bool found = false;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         if (matrix[i][j] == key)
    //         {
    //             cout << "Found at: " << i << "," << j << endl;
    //             found = true;
    //         }
    //     }
    // }

    // if (!found)
    // {
    //     cout << "Not found";
    // }

    //
    // int matrix[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}};

    // int rows = 3, col = 3;

    // int Maxsum = INT_MIN;
    // for (int i = 0; i < rows; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < col; j++)
    //     {
    //         sum += matrix[i][j];
    //     }
    //     if (Maxsum < sum)
    //     {
    //         Maxsum = sum;
    //     }
    // }

    // cout << "Max sum = " << Maxsum;

    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8,},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4;
    int diagonalSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                diagonalSum += matrix[i][j];
            }
            else if (j == n - 1 - i)
            {
                diagonalSum += matrix[i][j];
            }
        }
    }
    cout<<diagonalSum<<endl;
}