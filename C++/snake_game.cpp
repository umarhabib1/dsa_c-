#include <iostream>
#include <ctime>
using namespace std;

int main()
{
        srand(time(0));

        int points = 0;

    string player1 = " <";

    int n = 6;
    int X = 0;
    bool playing = true;
    int z = 2, y = 2;
    string input = "";

    int dot = rand() % (n - 2) + 1;
    if (dot == n-1)
    {
       dot = dot -1;
    }else if (dot == n)
    {
        dot -= 2;
    }
    
    
    
    cout<<" dot = "<<dot;

    do
    {
        cout << "Z" << endl;
        cin >> input;
        if (input == "d")
        {
            z++;
        }
        else if (input == "a")
        {
            z--;
        }
        else if (input == "w")
        {
            y--;
        }
        else if (input == "s")
        {
            y++;
        }


        /*
         * * * * * * **
         *            *
         *            *
         *     *      *
         *            *
         * * * * * * **
         */

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    cout << "* ";
                    if (y == 0)
                    {
                        playing = false;
                    }else if (y == n-1)
                    {
                        playing = false;
                    }                   
                }
                else
                {
                    if (i != n - 1)
                    {
                        if (j == 0 || j == n - 1)
                        {
                            cout << "* ";
                            if (z == j)
                            {
                                playing = false;
                            }
                            
                        }
                        else if (j == z && i == y)
                        {
                            cout << player1;
                        }
                        else if (j == dot && i == dot)
                        {
                            cout << ". ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    if (i == n - 1)
                    {
                        cout << "* ";
                    }
                }
            }
            cout << endl;
        }
        if (z==dot && y == dot)
            {
                points++;
               dot = rand() % (n - 2) + 1;
                   
             }


        if (playing == false)
        {
            cout<<"Game Over"<<endl;
        }
    } while (playing == true);
    cout<<"points = "<<points;
}