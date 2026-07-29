#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q1;  // max queue
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    q1.pop();

    cout << q1.size() << endl;

    priority_queue<int, vector<int>, greater<int>> pq;  // min queue

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}