#include<iostream>

using namespace std;

int main(){
    int choice;
    cout<<"Please select the menu"<<"\n"
    <<"1. Main menu"<<"\n"
    <<"2.Transfer"<<"\n"
    <<"3. Exit";


    switch (choice)
    {
    case 1:
        /* code */
        cout<<"Welcome to main menu";
        break;

    case 2 :

        cout<<"Welcome to Transfer session";

        break;

    case 3 :

        cout<<"Thank you for using our App!";

        break;
    default:
        cout<<"Sorry, you didn't select the proper selection. Please re-enter again!";
    }
        
}