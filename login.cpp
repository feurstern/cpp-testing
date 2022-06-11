#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool isLoggdedIn(){
    string username, password, un, pw;
    
    cout<<"Enter username:"<<endl;
    cin>>username;
    cout<<"Enter password:"<<endl;
    cin>>password;

    ifstream read("data\\"+username+".doc");
    getline(read,un);
    getline(read,pw);       

    if(username == un && password == pw){
        return true;
    }
    else{
        return false;
    }

}


int main(){
    
    int choice;

    cout<<"1:Register\n2: Login\nYour choice";cin>>choice;

    if(choice==1){
        string username, password;
        cout<<"Select your username"<<endl;
        cin>>username;
        cout<<"Select your password"<<endl;
        cin>>password;

        ofstream file;
        file.open("data\\"+username+".doc");

        file<<username<<endl<<password;
        file.close();
        main();


    }
    else if(choice==2){
        bool status = isLoggdedIn();

        if(!status){

            cout<<"False credetial login!"<<endl;
            system("PAUSE");
            return 0;

        }
        else{
            cout<<"Succesfully logged in!"<<endl;
            system("PAUSE");
            return 1;               

        }

    }

    
;}