#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> arr,int n ,int cows,int mid){
    int count = 1; 
    int lastposition = arr[0];
    for (int i = 0; i < n; i++) 
    {  
      if (arr[i] - lastposition >= mid)
        {
            count++;
            lastposition = arr[i];
        }

        if (count == cows)
        {
            return true;
        }
    }      

    return false;
}

int allocateCows(vector<int> arr,int n ,int cows){
    sort(arr.begin(), arr.end());
    int st = 0, ans = 0,end = arr[n-1] - arr[0] ;

    while(st <= end){ 
        int mid = st + (end - st)/2;
        if (isValid(arr, n , cows, mid))
        {
            st = mid +1;
            ans = mid;
        }else{
            end = mid -1;

        }
        
    }
    
    return ans;
}

int main(){
    vector<int> arr = {1,2,8,4,9};
    int cows = 3, n = arr.size();;


    cout << allocateCows(arr, n, cows) << endl;
}