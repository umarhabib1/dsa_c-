#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid)
{
    // m = total number of painter

    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > mid)
        {                                  // edge case
            return false;
        }

        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    return painter > m ? false : true;
}

int allocatePainter(vector<int> arr, int n, int m)
{
    int st = 0, sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size();
    int m = 2;
    cout << allocatePainter(arr, n, m) << endl;
}