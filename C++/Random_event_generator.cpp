#include<iostream>
#include<ctime>
using namespace std;
int main()
{
        srand(time(0));
         
        
        // for (int i = 1; i > 0; i++)
        // {
        //     int number = rand() % 10 + 1;
        //     cout<< number; 
        //     if (number ==1)
        //     {
        //         continue;
        //     } else if (number == 10)
        //     {
        //         break;
        //     }
            
            
        // }
        
        
 int count = 0;
 for (int i = 1; i > 0; i++)
 {
    count++;
 int cpu1 =  rand() % 5 + 1;
 int cpu2 =  rand() % 5 + 1;
 if (cpu1 == cpu2)
 {
    break;
 }
  
 }
cout<<count;


    }
