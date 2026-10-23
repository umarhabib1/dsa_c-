#include <iostream>
#include <vector>
using namespace std;

int Binay_search(vector<int> arr, int end, int target)
{
    int st = 0;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            cout<< arr[mid];
            return mid; 
        }
        

        if (st <= mid)
        {  
            if (arr[st] <= target <= arr[mid])
            {
               end = mid-1;
            }else{
                st = mid+1;
            }
            
        }else
        {
            if (arr[mid] <= target <= end)
            {
                st = mid+1;
            }else{
                end = mid-1;
            }
            
        }
        
        

    }

    return 0;
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int end = arr.size() - 1;
    int target = 3;

    Binay_search(arr, end, target);

}