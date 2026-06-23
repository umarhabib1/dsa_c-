#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(string arr[][8], int n,int px,int py,int wx,int wy)
{
    int nu;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            if (i == px && j == py)
            {
                arr[i][j] = ".";
            }
             else if(i == wx && j == wy)
            {
                arr[i][j] = "G";

            }
            cout << arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    srand(time(0));

    bool runing = true;

    int n = 8;
    int dot = (rand() % n + 1);
    string arr[8][8] = {
        {"#","#","#","#","#","#","#","#"},
        {"#"," ","#"," "," "," "," ","#"},
        {"#"," ","#"," "," "," "," ","#"},
        {"#"," ","#","#","#","#","#","#"},
        {"#"," "," "," "," "," "," ","#"},
        {"#","#","#","#","#","#"," ","#"},
        {"#"," "," "," "," ","#"," ","#"},
        {"#","#","#","#","#","#","#","#"},
    };
    int px = 6, py = 6;
    int wx = 2, wy = 1;
    drawBoard(arr, n,px,py,wx,wy);
    
    do
    {
        
            if (px >= wx && py >= wy)
            {
                if (arr[px-1][py] != "#")
                {
                    px--;
                }
                if (arr[px][py-1] != "#")
                {
                    py--;
                }
                drawBoard(arr, n, px, py, wx, wy);
            }else{
                if (arr[px+1][py] != "#")
                {
                    px++;
                }
                if (arr[px][py+1] != "#")
                {
                    py++;
                }
                drawBoard(arr, n, px, py, wx, wy);
            }
            if (px == wx && py == wy)
            {

                runing = false;
            }
    } while (runing == true);
    






    /*arr[n][n] = {
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
        {" ", " ", " ", " ", " ", " ", " ", "" },
    };*/
}