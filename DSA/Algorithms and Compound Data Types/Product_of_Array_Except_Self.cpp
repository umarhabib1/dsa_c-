#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> nums ={1,2,3,4};
    // vector<int> ans(nums.size(), 1);
    // int st = 0,end = nums.size() - 1;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size(); j++)
    //     {
    //             if (i != j)
    //             {
    //                 ans[i] *= nums[j];
    //             }
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<endl;
    // }
    

    ////////////////////////////////////////////////////////////////////////////////////////

    // vector<int> nums ={1,2,3,4};
    // vector<int> ans(nums.size(),1);
    // vector<int> prefix(nums.size(),1);
    // vector<int> suffix(nums.size(),1);

    // // prefix
    // for (int i = 1; i < nums.size(); i++)
    // {
    //     prefix[i] = prefix[i-1] * nums[i-1];
    // }

    // // suffix
    // for (int i = nums.size()-2; i >= 0; i--)
    // {
    //     suffix[i] = suffix[i+1] * nums[i+1];
    // }

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans[i] = suffix[i] * prefix[i];
    // }


    // for (int i = 0; i < nums.size(); i++)
    // {
    //    cout<< ans[i]<<endl;
    // }




    ///////////////////////////////////Optimal Solution////////////////////////////////////

    vector<int>nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    for (int i = n-2; i >= 0; i--)
    {
        suffix = suffix * nums[i+1];
        ans[i] *= suffix;
    }

    for (int i = 0; i < nums.size(); i++)
    {
       cout<< ans[i]<<endl;
    }

}