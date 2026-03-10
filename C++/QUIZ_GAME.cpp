#include <iostream>
using namespace std;

int main(){

    string questin[]={"1. Who is the owner of Tesla","2. who is the owner of googel","3. how many planents are there in the solar system", "4. What is the scientific formula of table salt", "5. who invented microscope", "6. who discovered cell" };

    string options[][3] = {{"A. elon musk", "B. Alphabet Inc","C. Nangyal"},
                          {"A. Alphabet Inc", "B. mark zuckerberg","C. Nanagyal" },
                          {"A. 9","B. 7","C. 8"},
                          {"Mg","b. CO2","C. NaCl"},
                          {"A. elon musk","B. Zacharias Janssen","C. Robert Hooke"},
                          {"A. Zacharias Janssen ","B. Robert Hooke","C. none"}};
   

    char answerKey[] ={'C','A','C','C','B','B'};


    int size  = sizeof(questin)/sizeof(string);
    int score;
    char guess;

    for (int i = 0; i < size; i++)
    {
        cout<<"************************************"<<endl;
        cout<<questin[i]<<endl;
        cout<<"************************************"<<endl;
        for (int  j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            cout<<options[i][j]<<endl;
        }
        
        cin>> guess;
        guess = toupper(guess);

        if (guess  == answerKey[i])
        {
            cout<<"correct"<<endl;
            score++;
        }
        else{
            cout<<"incorrect"<<endl;
            cout<<"correct is : "<<answerKey[i]<<endl;
        }
        
    }
    cout<<"Correct gusses : "<<score<<endl;
    cout<<"Total Question are : "<<size<<endl;
    cout<<"Your percentage is : "<< (score/(double)size)*100 ;
    

}