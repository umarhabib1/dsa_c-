#include <iostream>
using namespace std;

const int tenmil = 10000000;

class BankAccount{
    public:
     int accountNumber;
    double balance;
    static int count;
    
    

    BankAccount(){
        accountNumber = 287323234 + count;
        balance = 0.0;
        cout<<"your account Number is "<<accountNumber<<endl;
        cout<<"your bank balance is "<<balance<<endl;
        count ++;
    }

    void deposit(double n){
        if (n < 0)
        {
            cout<<"Error"<<endl;
        }else if (n > tenmil)
        {
            cout<<"you can only deposit money les then ten million or 10000000 "<<endl;
        }
        else  {
        balance = balance + n;
        cout<<n<<" has been deposited"<<endl;
        }
            
    }
    void withdraw(double n){
        if (n < 0)
        {
            cout<<"Error"<<endl;
        }else if (n> balance)
        {
            cout<<"you do not have that much money in your bank account"<<endl;

        }else{
        balance = balance - n;
        cout<<n<<" has been withdraw"<<endl;
        }
            
    }
    void displayBalance(){
        cout<<"your bank balance = "<<balance<<endl;
    }
};

int BankAccount::count = 0;


int main(){
    /*
    Q15

Create a BankAccount class:

Members:

accountNumber

balance

Functions:

deposit()

withdraw()

displayBalance()

Add constructor and static bankName.*/

BankAccount b1;
b1.deposit(1000000);
b1.displayBalance();
b1.withdraw(100);
b1.displayBalance();


}