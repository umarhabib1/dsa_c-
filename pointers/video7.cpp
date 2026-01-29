#include <iostream>
using namespace std;
int sumOfElement(int A[],int size){
int i,sum=0;

for (int i = 0; i < size; i++){
    sum += A[i];
}
return sum;
}
int main(){
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElement(A,size);
    cout<<"sum ofnumbers = "<<total;
}