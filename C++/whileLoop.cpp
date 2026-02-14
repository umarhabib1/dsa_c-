#include <iostream>
using namespace std;

int main()
{
    //  string name;
    // cout<<"enter your name: ";
    // getline(cin,name);

    // while (name.empty())
    // {
    //  cout<<"enter your name: ";
    // getline(cin,name);
    // }

    // cout<<"hello "<<name;

    // while (1 == 1)
    // {
    //     cout<<"help i am stuck";     // Infinite loop
    // }

    // problem 1
    // int number;
    // int i = 0;
    // cout << "Enter a number";
    // cin >> number;

    // while (i <= number)
    // {
    //     cout << i;
    //     i++;
    // }

    //  problem 2

    // int number;
    // int i = 0;
    // cout << "Enter a number";
    // cin >> number;

    // while (i <= number)
    // {
    //     if (i%2 ==0)
    //     {
    //         cout<<i;
    //     }

    //     i++;
    // }

    // problem 3
    // int number;
    // int i =1;
    // int j = 0;

    // cout << "Enter a number";
    // cin >> number;

    // while (i<=number)
    // {
    //      j = j+i;
    //     i++;
    // }
    // cout<<j;

    //  Problem 4
    //    int num, rev = 0;

    // cout << "Enter a number: ";
    // cin >> num;

    // while (num > 0) {
    //     int digit = num % 10;     // get last digit
    //     rev = rev * 10 + digit;   // append it to rev
    //     num = num / 10;           // remove last digit
    // }

    // cout << "Reversed number: " << rev << endl;

    //  Problem 5
    // Print numbers from 10 to 1 using while
    // int number =10;
    // int i = 0;

    // while (i <=number )
    // {
    //     cout<<number - i<<endl;
    //     i++;
    // }

    // problem 6     Print the square of numbers from 1 to N.

    // int N, i=1;
    // cout <<"enter a number";
    // cin>>N;

    // while (i <= N)
    // {
    //     cout<<i*i<<endl;
    //     i++;
    // }

    //  problem 7: Print numbers between 1 and N except multiples of 5.
    //     int N, i =1;
    //   cout <<"enter a number";
    //     cin>>N;

    //     while (i <=N)
    //     {
    //         if (i%5 == 0)
    //         {

    //         }else{
    //               cout<<i<<endl;
    //         }
    //         i++;
    //     }

    // problem 8:  Input N and print sum of even numbers up to N.
    //    int N,sum = 0,i =1;
    //    cout <<"enter a number";
    //     cin>>N;

    //     while (i <=N)
    //     {
    //         if (i%2==0)
    //         {
    //             sum = sum +i;
    //             
    //         }
    //         i++;
    //     }
    //     cout<<sum;

    // problem 9:  Input a number and count zeros in it.

    // int num, count =0;

    // cout << "Enter a number: ";
    // cin >> num;

    // // Handle special case for input 0
    // if (num == 0) {
    //     cout << "Number of zeros: 1" << endl;
    //     return 0;
    // }

    // Process number
    // while (num != 0) {                               // how the loop works
    //     if (num % 10 == 0) {                        // int number = 205;
    //         count++;                                    //number %= 10;
    //     }                                           //number /=10;
    //     num /= 10;                                  //cout<<number;
    // }                                               //cout +1
    // cout << "Number of zeros: " << count << endl;
    // return 0;






    // problem 10: Input a number and find first and last digit
    
    // int number,first,last;
    //  cout << "Enter a number: ";
    // cin >> number;
      
    // first = number;
    //   last = number %10;

    // while (first>=10)
    // {
    //     first /=10;
        
       
    // }
    // cout<<"the first number: "<<first<<endl;
    // cout<<"the last number: "<<last<<endl;






    // problem 11: Input a number and swap first and last digit.
    // int number,last,first;
    // int temp;
    // cout << "Enter a number: ";
    // cin >> number;
    // first = number;
    // last = number%10;

    // while (first >=10)
    // {
    //     first /=10;
    // }
    // // cout<<"the first number: "<<first<<endl;
    // // cout<<"the last number: "<<last<<endl;
    // temp =first;
    // first = last;
    // last = temp; 
    // cout<<"the first number: "<<first<<endl;
    // cout<<"the last number: "<<last<<endl;
      
    



    // problem 11:
    // int row = 1;
    
    // while (row <=5)
    // {
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         cout<<"* ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }
    
    
    
    // problem 12
    // int row = 1;
    // while (row <=4)
    // {
    //     int col =1;
    //     while (col <=4)
    //     {
    //         cout<<"* ";
    //         col++;
    //    }
    //    cout<<endl;
    //     row++;
    // }


    // problem 14    
    // int row = 1;
    // while (row <=4)
    // {
    //     int col =1;
    //     while (col <=row)
    //     {
    //         cout<<"* ";
    //         col++;
    //    }
    //    cout<<endl;
    //     row++;
    // }
    


    // problem 15
    // int row = 1;
    
    // while (row <= 4)
    // {
    //     int col =1;
    //     int value =1;
    //     while (col<=row)
    //     {
            
    //         cout<<value++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }


    // problem 16
        int row = 1, n = 24;
    
    while (row <= n)
    {
        int col =1;
        while (col<=n-row+1)
        {
            
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row++;
    }

  

return 0;

}