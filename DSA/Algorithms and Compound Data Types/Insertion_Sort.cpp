#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Insertion sort  = O(n^2)

    vector<int> arr = {5, 4, 3, 1, 0};
    int n = arr.size();

    for (int i = 1; i < n; i++)
    { 
        int curr = arr[i]; 
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > curr)
        {
            arr[previous + 1] = arr[previous];
            previous--; 
        }
        arr[previous + 1] = curr;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}