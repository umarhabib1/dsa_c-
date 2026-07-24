#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s1;
    s1.push(1); 
    s1.push(2); 
    s1.push(3); 
    s1.push(4); 
    s1.push(5);

    // s1.pop();
    // s1.pop();
    
    // while ( !s1.empty())
    // {
        //     cout<<s1.top()<<endl;
        //     s1.pop();
        // }
        
        stack<int> s2;
        s2.swap(s1);
        
        while ( !s2.empty())
        {
                cout<<s2.top()<<endl;
                s2.pop();
            }
            

    
    
}
