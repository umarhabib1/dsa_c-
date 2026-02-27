#include <iostream>
#include<ctime>
using namespace std;

int main(){
    string player, cpu;
    int choice = 0;
    int pcount= 0,cpucount =0;
    
        srand(time(0));
        do
        {
            
            int randnum = (rand() % 3)+1;
            
if (randnum ==1) 
{
    cpu ="rock";
}else if (randnum ==2)
{
    cpu ="paper";
}else if (randnum ==3)
{
    cpu ="scissors";
}

cout<<"*************************ROCK_PAPER_SCISSORS_Game********************"<<endl;

cout<<"enter a choice"<<endl;
cout<<"1.rock"<<endl;
cout<<"2.paper"<<endl;
cout<<"3.scissors"<<endl;
cout<<"4.Exit"<<endl;

cin>>choice;



switch (choice)
{
case 1:
    player = "rock";
    break;
case 2:
    player = "paper";
    break;
case 3:
    player = "scissors";
    break;
case 4:
    cout<<"Thanks for playing see you next time";
    break;

default:
cout<<"invaild choice";
    break;
}

if (player == "rock" && cpu == "paper")
{
    cout<<"you lose"<<endl;
    cpucount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;
}else if(player == "rock" && cpu == "scissors")
{
    cout<<"you win"<<endl;
    pcount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;

} else if (player == "paper" && cpu == "scissors")
{
    cout<<"you lose"<<endl;
    cpucount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;
}else if (player == "paper" && cpu == "rock")
{
    cout<<"you win"<<endl;
    pcount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;
} else if (player == "scissors" && cpu == "rock")
{
    cout<<"you lose"<<endl;
    cpucount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;
} else if (player == "scissors" && cpu == "paper")
{
    cout<<"you win"<<endl;
    pcount++;
    cout<<"cpu: "<<cpucount<<endl;
    cout<<"player: "<<pcount<<endl;
}else if (player == cpu)
{
    cout <<"it's a draw";
}
   
} while (choice != 4);






}
 