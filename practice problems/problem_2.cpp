#include <iostream>
using namespace std;
int A[100]{};
int endindex = -1;

void insert(int value){
    endindex++;
    A[endindex] =value;
}

void display(){
    for(int i =0;i <=endindex;i++){
       cout<<A[i]<<" "<<endl;
    }
}

int size() {
    return endindex + 1;
}
bool isEmpty() {
    return endindex == -1;
}
    
    

int main(){
  
    insert(5);
    insert(10);
    insert(15);
    insert(20);

    display();

    cout << "Size of list: " << size() << endl;

    
    if(isEmpty()) {
        cout << "List is empty" << endl;
    } else {
        cout << "List is not empty" << endl;
    }
}