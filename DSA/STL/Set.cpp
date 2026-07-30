#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(9);
    s.insert(3);
    s.insert(7);
    s.insert(8);

    s.erase(4);

    for (int x : s)
    {
        cout << x;
    }
    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
}