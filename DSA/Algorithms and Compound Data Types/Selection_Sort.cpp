#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Selection sort  = O(n2)

    vector<int> arr = {5,4,3,1,0};
    int n = arr.size();

    for (int i = 0; i < n-1 ; i++)
    {
        int smallestIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
        
    }


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    

}