#include <iostream>
using namespace std;

int main(){

    // foreach loop = loop that eases the traversal over an
    // iterable data set
    
    // string studentds[] ={"hassan","nangyal","umar"};
    // for (string element : studentds )
    // {
    //     cout<<element<<endl;
    // }
    

    // int numbers[] = {45,567,45,32,123,456,456,234};
    // for ( int number : numbers)
    //     {
    //     cout<<number<<endl;
    // }
    
       
    // probelm 1: Find the sum of all numbers in an array using a for-each loop.
    
    // int number[] = {1,2,3,4,5,6,};
    // int sum =0;
    // for (int element : number)
    // {
        
    //     sum  += element ;
    // }
    // cout<<sum;
    
    


    // probelm 2: Count how many elements are present in an array using a for-each loop.
    
    // int number[] = {1,2,3,4,5,6};
    //   int i=0;
    // for (int element : number)
    // {
        //    i++;   
        // }
        // cout<<i++;
        
        
        // probelm 3: Given a string, print each character using a for-each loop.
        // string name = "uamr";
        // for (char element : name)
        // {
        //     cout<<element<<endl;
        // }
        
        
        
        // probelm 4: Find the largest element in an integer array using a for-each loop.

            int number[] = {1,2,33,4,5,6};
            int largest = number[0];   // assume first element is largest

            for (int element : number)
            {
                if (element > largest)
                {
                    largest = element;
                }
                
            }
            cout << "Largest element is: " << largest;
            

    
}