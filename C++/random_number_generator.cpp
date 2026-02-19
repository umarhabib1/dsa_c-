#include <iostream>
using namespace std;

int main()
{
    // pseudo-random = NOt truly random(but close)

    srand(time(NULL));
    int number1 = (rand() % 6)+1;
    int number2 = (rand() % 6)+1;
    int number3 = (rand() % 6)+1;
    cout<<number1<<endl;
    cout<<number2<<endl;
    cout<<number3<<endl;
}