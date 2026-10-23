#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {-1,0,3,4,5,12};
    int target = 0;
    int st = 0;
    int end = arr.size()-1;

    // int mid = (st + end)/2;
    int mid = st + (end -st)/2;   // optimized 


    bool notfound = false;

    while (st <= end)
    {
        if (arr[mid] < target)
        {
            st = mid+1;
            mid = (st + end)/2;
            // cout<<mid;
        }
        if (arr[mid] > target)
        {
            end = mid-1;
            mid = (st + end)/2;
        }
        if (arr[mid] == target)
        {
            cout<<arr[mid];
            cout<<"hi";
            break;
        }else if (arr[mid] == target )
        {
            notfound = true;
        }
        
    }
    if (notfound == true)
    {
        cout<<"not founded";
    }
    
    
 return 0;   
}