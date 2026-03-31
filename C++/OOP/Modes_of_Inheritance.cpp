#include <iostream>
using namespace std;

class Parent
{
public:
    int publicVar = 10;

protected:
    int protectedVar = 20;

private:
    int privateVar = 30;
};

class ChildPublic : public Parent
{
public:
    void show()
    {
        cout << publicVar << endl;    // ✅ Accessible
        cout << protectedVar << endl; // ✅ Accessible
        // cout << privateVar; ❌ Not Accessible
    }
};

class ChildProtected : protected Parent
{
public:
    void show()
    {
        cout << publicVar << endl;    // ✅ Accessible
        cout << protectedVar << endl; // ✅ Accessible
    }
};

class ChildPrivate : private Parent
{
public:
    void show()
    {
        cout << publicVar << endl;    // ✅ Accessible
        cout << protectedVar << endl; // ✅ Accessible
    }
};

int main()
{
    /*
    There are 3 modes:

  1.public

   2.protected

   3.private
    */
    ChildPublic obj1;
    obj1.show();

    cout << obj1.publicVar << endl; // ✅ Accessible
    // cout << obj.protectedVar; ❌ Error

    ChildProtected obj2;
    obj2.show();

    // cout << obj2.publicVar; ❌ Error

    ChildPrivate obj3;
    obj3.show();

    // cout << obj3.publicVar; ❌ Error
}