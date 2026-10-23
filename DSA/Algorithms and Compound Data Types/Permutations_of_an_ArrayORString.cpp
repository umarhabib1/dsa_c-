#include <iostream>
#include <vector>
using namespace std;

void permutation(vector<int>& arr, int idx) {

    if (idx == arr.size()) {
        for (int x : arr)
            cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < arr.size(); i++) {
        swap(arr[idx], arr[i]);

        permutation(arr, idx + 1);

        swap(arr[idx], arr[i]);   // backtrack
    }
}

int main(){
    vector<int> arr = {1,2,3};
    permutation(arr,0);
}