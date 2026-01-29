#include <iostream>
using namespace std;
int main(){
// 2D arrays
int a[2][3] =
    {   {1,2,3},
        {4,5,6}
    };
// cout<<a[0][0];

// int (*p)[3] ;
// p = a;
// cout<<**p+1;
cout<<a[1,2] << endl;
cout<<a[1][2]<< endl;
// cout<<*a;

int (*umar)[3] = a;
cout<< umar<< endl;
cout<< a[0,0]<< endl;
cout<< a[0][0]<< endl;
cout<< *(*umar)<< endl;
cout<< (*umar)<< endl;
cout<< *(*umar) + 3<< endl;

int * hassan = a[0,0];
int** hamza = &hassan;

cout<< **hamza << endl;
cout<< *hassan + 3<< endl;

// int (*nimra)[0]  = &a[1];
// cout<<*nimra << endl;

// cout<< a[1][2];


int khamar [2][3][4] = 
    {
        {
            {1,2,3,4},
            {5,6,7,8},
            {3,4,5,6}
        },
        {
            {1,4,5,4},
            {9,6,3,8},
            {3,4,7,1}
        }

    };

    int (*mar)[3][4] = &khamar[0];
    cout<<"hamza "<< (*(mar+1)) [0][2]<<endl;



}