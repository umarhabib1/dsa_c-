#include <iostream>
using namespace std;

int main()
{
    // break = break out of a loop
    // continue = continue skip current iteration
    // for (int i = 0; i < 20; i++)
    // {
    //     if (i==13)
    //     {
    //         break;
    //     }  
    // }
    // for (int i = 0; i < 20; i++)
    // {
    //     if (i==13)
    //     {
    //         continue;;
    //     }  
    // }
    

    // problem 1

    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i%7==0)
    //     {
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    
    
    // problem 2
int n;

while (true)
{
    cout << "\nChoose one:\n";
    cout << "1. Say Hello\n";
    cout << "2. Say Bye\n";
    cout << "3. Exit\n";

    cin >> n;

    if (n == 1)
    {
        cout << "Hello" << endl;
    }
    else if (n == 2)
    {
        cout << "Bye" << endl;
    }
    else if (n == 3)
    {
        cout << "Exit" << endl;
        break;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}

    
    


    
}