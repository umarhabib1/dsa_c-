#include <iostream>
using namespace std;

enum Day  {monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
/*By default:

Monday = 0

Tuesday = 1

Wednesday = 2

and so on...*/



///////////////////////// Assign Custom Values///////////////////////

enum color {
    blue = 2,
    red = 4,
    green = 6
};


int main(){
    /* Enums = An enum (short for enumeration) is a user-defined data type
     that assigns names to integral constants.It makes your code more readable and organized.
*/

// cout<<Wednesday;  // It prints 2 because Wednesday has value 2. 

// Day today = Thursday;

// switch (today)
// {
// case monday:
//     cout<<"it is monday";
//     break;
// case Tuesday:
//  cout<<"it is tuesday";
//     break;
// case Wednesday:
//  cout<<"it is wednesday";
//     break;
// case Thursday:
//  cout<<"it is Thursday";
//     break;
// case Friday:
//  cout<<"it is friend";
//     break;
// case Saturday:
//  cout<<"it is Saturday";
//     break;
// case Sunday:
//  cout<<"it is Sunday";
//     break;

// default:
//     break;
// }

// cout<<red+blue; //it will print 6 because the value of red is 4 and value of blue is 2 so 4+2= 6;



color paint = red; // red value is 4 so in the first case red = 4;

switch (paint)
{
case 4:  // 4 is the value of red
    cout<<"it is color red";
    break;
case 2:
    cout<<"it is color blue";
    break;

default:
    break;
}

}