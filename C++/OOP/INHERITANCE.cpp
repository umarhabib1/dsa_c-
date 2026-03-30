#include <iostream>
using namespace std;

class animal{
    public:
 bool alive = true;

 void eat(){
    cout<<"this animal is eating";
 }
};

class Dog : public animal{

};

 int main()
{
    
    Dog d1;
    cout<< d1.alive<<endl;
    d1.eat();

    return 0;
}
