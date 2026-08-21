#include <iostream>
#include <vector>
using namespace std;

void printSubSet(vector<int>& vec, vector<int>& ans , int i){
    if (i == vec.size())
    {
        for (int x : ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    
    ans.push_back(vec[i]);
    printSubSet(vec ,ans ,i+1);
    ans.pop_back();
    printSubSet(vec ,ans ,i+1);

}

int main(){
    vector<int> vec = {1,2,3};
    vector<int> ans ;
    printSubSet(vec,ans,0);
}