#include<iostream>

using namespace std;

int main(){
    string username, password;
    int userSelection;


    cout<<'Enter your selection';
    cout<<"\n1. Login";
    cout<<"\n2. Reset Password";
    cout<<"\n3. Exit";
    cin>>userSelection;


    if(userSelection==1){
        cout<<"Username:";
        cout<<"\nPassword:";
    }
    else if(userSelection==2){
        cout<<"Please provide your registered email address";
    }
    else if(userSelection==3){
        cout<<"Enter any key to terminate the program";
    }
    else{
        cout<<"You have entered wrong selection!";


    }
}