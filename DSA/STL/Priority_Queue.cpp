#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    
    q1.pop();

    cout<<q1.size()<<endl;

 
}