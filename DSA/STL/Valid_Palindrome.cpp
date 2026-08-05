#include <iostream>
using namespace std;

// void Reverse(string str,string &strReverse){
//     int st =0, end = str.size()-1;
//     while (st < end)
//     {
//         swap(str[st], str[end]);
//         st++ , end--;
//     }
//     strReverse = str;
// }

// void Check(string str,string strReverse){
//     if (str == strReverse)
//     {
//         cout<<"is Palindrome"<<endl; 
//     }else{
//         cout<<"Not a Palindrome"<<endl; 
//     }
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left]))
            left++;

        while (left < right && !isalnum(s[right]))
            right--;

        if (tolower(s[left]) != tolower(s[right]))
            return false;

        left++;
        right--;
    }

    return true;
}

    
// }

int main() { 
    // string str = "madam";
    // string strReverse; 
    

    // Reverse(str, strReverse);
    // Check(str, strReverse);

    // cout<<strReverse<<endl;


    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "Valid Palindrome";
    else
        cout << "Not a Valid Palindrome";

}