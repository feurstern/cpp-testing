#include<iostream>

using namespace std;


struct finalscore{
    float assignmentScore;
    float quizScore;
    float midScore;
    float yearScore;
};

void greetings(){
    cout<<"Welcome to score coversion v.19"<<endl;
    cout<<"Made by Muhammad Rio Kurniawan\n";
}


int main(){
    greetings();
    float actualScore;
    finalscore finalscores;

    cout<<"Enter your assignment score:\n";
    cin>>finalscores.assignmentScore;


    cout<<"Enter your quizscore:\n";
    cin>>finalscores.quizScore;


    cout<<"Enter your mid score:\n";
    cin>>finalscores.midScore;

    cout<<"Enter your years score:\n";
    cin>>finalscores.yearScore;

    actualScore =(finalscores.assignmentScore*10%)+(finalscores.quizScore*20%)+(finalscores.midScore*30%)+(finalscores.yearScore*40%);
}