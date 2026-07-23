#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    // pair<int,string> p = {20,"umar"};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    // pair<int,pair<string,float>> p2 = {999,{"habib",20.2}};
    // cout<<p2.first<<endl;
    // cout<<p2.second.first<<endl;
    // cout<<p2.second.second<<endl;

    vector<pair<int, char>> v1 = {{4, 's'}};
    v1.push_back({9, 'd'});
    v1.emplace_back(123, 'r');

    // for (pair<int,char> x : v1)
    // {
    //     cout<<x.first<<endl;
    //     cout<<x.second<<endl;
    // }

    for (auto &x : v1)
    {
        cout << x.first << endl; // better
        cout << x.second << endl;
    }
}