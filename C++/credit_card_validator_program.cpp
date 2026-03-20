#include <iostream>
using namespace std;

int getDigit(const long number){

    return number %10 + (number/10 %10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() -1; i >= 0; i-=2)
    {
        sum += cardNumber[i] -'0' ; 
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() -2; i >= 0; i-=2)
    {
             sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}


int main(){
    //  6011  0009 9013 9424
    string cardNumber;
    int number;
    cout<<"Enter your credit card number"<<endl;
    cin>>cardNumber;

    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (result % 10 == 0)
        cout << "It is VALID";
    else
        cout << "It is INVALID";

    return 0;
    

}