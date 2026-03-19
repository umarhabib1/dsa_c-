#include <iostream>
using namespace std;
    
int main(){
    
    
    string word[6]{"hello","good","bro","potato","tomato","last" };
    int size = sizeof(word)/sizeof(string);
    int win = 0, lose = 0;

     int rounds = 6;

    for (int r = 0; r < rounds; r++)
    {   
    srand(time(NULL));
     int number = (rand() % 6); 
    string originalWord = word[number];
    string scrambledword = word[number];
    // cout<<scrambledword;
    for (int i = 0; i < scrambledword.length(); i++)
    {
        int randomPos = rand()%scrambledword.length();
        swap(scrambledword[i], scrambledword[randomPos]);
        cout<<scrambledword[i];
    }

    cout<<endl;
     

    string input;
    cout<<"which word is it"<<endl;
    cin>>input;

     if (input == originalWord)   // Compare with original
    {
        cout << "You win ";
        win++;
    }
    else
    {
        cout << "You lose ";
        cout << "\nThe correct word was :  " << originalWord<<endl;
        lose++;
    }
    
cout<<"you corrected : "<<win<<" words and you incorrected "<<lose<<" out of "<<win +lose<<" question"<<endl;
} 
}