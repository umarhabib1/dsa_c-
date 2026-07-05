#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {0, 3, 8, 9, 5, 2};
    int n = nums.size();
    int st = 1; 
    int end = n - 2;
    int peak = 0;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            peak = mid;
            break;
        }
        else if (nums[mid - 1] < nums[mid]/*&& nums[mid] < nums[mid + 1] */)
            {
                st = mid + 1;
            }
            else /* if (nums[mid] - 1 > nums[mid] && nums[mid] > nums[mid + 1])*/
            {
                end = mid - 1;
            }
        
    }

    cout<<"peak index = " << peak<<endl;
    cout<<"peak index valuev = " << nums[peak]<<endl;
}