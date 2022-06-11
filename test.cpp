#include<iostream>

using namespace std;

int main(){

    string username;
    int score1, score2, score3, finalScore;

    cout<<"What's your name:";
    cin>>username;

    cout<<"Enter the score exam continously: "<<"\n";
    cin>>score1>>score2>>score3;

    finalScore = (score1+score2+score3)/3;

    if (finalScore>=86)
    {
        cout<<"Hi, "<<username<<"!"<<" You got A"<<"\n";
        cout<<"Congralutations, you have passed!";
    }
    else if (finalScore>=75)
    {
        cout<<"Hi, "<<username<<"!"<<" You got B"<<"\n";
        cout<<"Congralutation, you have passed the exam!";
    }
    else
    {
        cout<<"Sorry, "<<username<<". You failed!";
    }

    return EXIT_SUCCESS;
    

    
}