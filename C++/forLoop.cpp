#include <iostream>
using namespace std;

int main()
{

    /*
    // //for (size_t i = 0; i < count; i++)
    // //{
        // // /* code */
    // // }*/
    
    // for (int i = 0; i < 5; i++)
    // {
    //  cout<<"hello"<<endl;
    // }
    // cout<<"bye";



    // problem 1
    //  int n = 4;
    // for (int row = 0; row <= n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout<<"* " ;
    //     }
    //     cout<<endl;
    // }
    
// problem 2
// int n = 4;
//     for (int row = 0; row <= n; row++)
//     {
//         for (int col = 0; col < row; col++)
//         {
//             cout<<"* " ;
//         }
//         cout<<endl;
//     }


// pronlem 3
   int rows = 3;

    for (int i = 1; i <= rows; i++) {

        // print spaces
        for (int s = 1; s <= rows - i; s++) {
            cout << " ";
        }

        // print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
 