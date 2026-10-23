#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // // vector<int> arr = {1,1,2,3,3,4,4,8,8};
    // vector<int> arr = {3,3,7,7,10,11,11};
    // int st = 0, end = arr.size() -1, single = 0 ;

    // while (st <=end)
    // {
    //     int mid = st + (end - st)/2;

    //     if ( arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])
    //     {
    //         single = mid;
    //         break;
    //     }

    //      if (mid % 2 == 1)
    //     {
    //         mid--;
    //     }
    //         if (arr[mid] == arr[mid+1])
    //         {
    //             st = mid +1;
    //         }else{
    //             end = mid -1;
    //         }
    //     {

    // }
    // }

    /////////////////////////////////////

    // // vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    // // vector<int> arr = {3,3,7,7,10,11,11};
    // vector<int> arr = {3};
    // int st = 0, end = arr.size() - 1, single = 0;

    // if (arr.size() == 1)
    // {
    //     single = 0;
    // }
    // else
    // {

    //     while (st <= end)
    //     {
    //         int mid = st + (end - st) / 2;

    //         if (mid == 0 && arr[mid] != arr[mid + 1])
    //         {
    //             single = mid;
    //             break;
    //         }
    //         if (mid == arr.size() - 1 && arr[mid] != arr[mid - 1])
    //         {
    //             single = mid;
    //             break;
    //         }

    //         if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])
    //         {
    //             single = mid;
    //             break;
    //         }

    //         if (mid % 2 == 0)
    //         {
    //             if (arr[mid + 1] == arr[mid])
    //             {
    //                 end = mid - 1;
    //             }
    //             else
    //             {
    //                 st = mid + 1;
    //             }
    //         }
    //         else
    //         {
    //             if (arr[mid - 1] == arr[mid])
    //             {
    //                 st = mid + 1;
    //             }
    //             else
    //             {
    //                 end = mid - 1;
    //             }
    //         }
    //     }
    // }
    // cout << arr[single];





///////////////////////////////   best  version ////////////////////

    vector<int> arr = {1,1,2,3,3,4,4,8,8};

    int st = 0;
    int end = arr.size() - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        // make mid even
        if (mid % 2 == 1)
        {
            mid--;
        }

        if (arr[mid] == arr[mid + 1])
        {
            st = mid + 2;
        }
        else
        {
            end = mid ;
        }
    }

    cout << "Single element = " << arr[st];




}