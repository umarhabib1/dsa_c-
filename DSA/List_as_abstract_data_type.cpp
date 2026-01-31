#include <iostream>
using namespace std;
 int A[100];
int endIndex = -1;

// insert function (List ADT operation)
void insert(int value) {
    
    endIndex++;
    A[endIndex] = value;
}
int main(){
 
   insert(1);
   insert(2);
   insert(3);
   insert(5);
   insert(4);
    
   for (int i = 0; i < 101; i++)
   {
    cout<<A[i];
   }
   
}