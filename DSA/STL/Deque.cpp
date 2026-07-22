#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {10, 20, 30};

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);

    cout<<d[2]<<endl;

    for (auto it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
}