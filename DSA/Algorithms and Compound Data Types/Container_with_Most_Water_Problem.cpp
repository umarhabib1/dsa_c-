#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    /////////////////////////// Brute Solution //////////////////////////////

    // vector<int> height = {1,8,6,2,5,4,8,3,7};
    // int w = 0, h = 0;
    // int maxA = 0;

    // for (int i = 0; i < height.size(); i++)
    // {
    //     for (int j = i+1; j < height.size(); j++)
    //     {
    //         w = j-i;
    //         h = min(height[i], height[j]);
    //         int A = w*h;
            
    //         if (A > maxA)
    //         {
    //             maxA = A;
    //         }
            
            
    //     }
    // }
    // cout<<maxA;
 
    


    ////////////////////////////// Optimal Solution/////////////////////////////////////////

    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    int st = 0, end = height.size() -1;
    int maxA = 0;

    while (st < end)
    {
      int w = end -st;
      int h = min(height[st],height[end]);  
      int A = w*h;
      
    //   if (A > maxA)
    //   {
    //     maxA = A;
    //   }
        //    OR
        maxA = max(A,maxA);
      if (height[st] < height[end])
      {
        st++;
      }else
      {
        end--;
      }
    }
    cout<<maxA;

}