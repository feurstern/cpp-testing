#include<iostream>

using namespace std;


struct username{

    char name[25];
    string citizenship;
    int age;

};

int main(){

    string miku;

    struct username x;
    // user enter their name
    cout<<"Enter your name:"<<endl;
    cin>>x.name;

    //user enter their natinonallity
    cout<<"Enter your country origin:"<<endl;
    cin>>x.citizenship;


    cout<<"Hatsune MIku";    
    getline(cin,miku);


    // user enter their age
    cout<<"Enter your age:";
    cin>>x.age;


    if(x.age>=18){

        cout<<"Hi! "<<x.name;
        cout<<"\nYour nationality is:"<<x.citizenship;
        cout<<"\nYou can go abroad!";
    }
    else{
        cout<<"Hi! "<<x.name;
        cout<<"\nYour nationality is:";

        cout<<"\nYour age is not enough to go to abroad!";
    } 
    
      //user
}

