#include <iostream>
#include <vector>
using namespace std;
// typedef std::vector<std::pair<std::string,int>> pairlist_t ;

// typedef string text_t; // now i can write text_t insted of typing string
// typedef int num_t; // now i can write num_t insted of typing int

// there is a better way to do the same thing by using   "using" insted of "typedef"
using text = string;
using num = int;
int main()
{
    // std::vector<std::pair<std::string,int>> ;

    // text_t name1 = "umar";   // typedef
       text name1 = "umar";     //using
    string name2 = "hassan";

    cout<<name1 <<endl;

    // num_t x  = 5;
    // num_t y  = 0;           // typedef
    // num_t sum  = x+y;

    num x  = 5;
    num y  = 0;                // using
    num sum  = x+y;

    cout<<sum <<endl;
    
}