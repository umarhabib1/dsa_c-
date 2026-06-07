#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& vec, int size){
    int start = 0, end = size-1;
    
        while (start < end)
        {
            int temp = vec[start];
            vec[start] = vec[end];
            vec[end] = temp;
            start++;
            end--;
        }
    
}

int main()
{
    // vector<int> vec= {1,2,3};
    // vector<int> vec(3,1); //  vec(3    ,    1)
    ///////////////////////////      size | element at every index

    // vector<int> vec = {1, 2, 3};
    //  vec.push_back(4);
    // vec.push_back(5);
    // vec.push_back(6);

    // vec.pop_back();

    // cout<<"vec size = "<<vec.size()<<endl;

    // for(int i : vec){
    //     cout<<i;
    // }
    // cout<<endl;

    // vec.front() = 3;
    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;
    // cout<<vec.at(2)<<endl;
    
    // reverse a vector

    vector<int> vec = {1,2,3,4};
    int size = vec.size();
    
    reverse(vec , size);

    for (int i : vec)
    {
        cout<<i;
    }
    

    return 0;
}