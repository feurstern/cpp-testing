#include<iostream>

using namespace std;

void username(){
    string username;
    cout<<"Enter your name:"<<endl;
    cin>>username;
}

void scoreCalculation(){
    int score1,score2,score3,finalScore;

    cout<<"Please enter three score continously:"<<endl;
    cin>>score1;
    cin>>score2;
    cin>>score3;

    finalScore=(score1+score2+score3)/3;

    if(finalScore>=90){
        cout<<"You passed the test, you got A";
        cout<<"\n Your last score is"<<finalScore;
    }

    else if(finalScore>=75){

        cout<<"You passed the test, you got B";
        cout<<"\n Your last score is"<<finalScore;

    }
    else{
         cout<<"You failed pass the the test";
        cout<<"\n Your last score is "<<finalScore;
    }
}


int main(){
    cout<<"==============================="<<endl;
    cout<<"Welcome to Student CLI Reports"<<endl;
    cout<<"==============================="<<endl;

    username();
    scoreCalculation();


}
