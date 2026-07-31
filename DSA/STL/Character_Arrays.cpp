#include <iostream>
using namespace std;

int main()
{
    char array1[] = "wake up ";
    for (char x : array1)
    {
        cout<<x;
    }

        char array2[] = {'t','o',' ','r','e','a','l','i','t','y'};
        int n = sizeof(array2) / sizeof(array2[0]);
        
        for (int i = 0; i < n; i++)
        {
            cout<<array2[i];
        }
        

    
}