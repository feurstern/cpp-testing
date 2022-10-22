#include<iostream>
#include<string.h>


using namespace std;

void greetings(){
    cout<<"Welcome to our Program.\n";
    cout<<"Made by Muhammad Rio Kurniawan\n";
}


struct students
{
    char name[30];
    char nim[10];
    char address[100];
    float scoreIPK;
};


int main(){
    students student;
    greetings();

    cout<<"Enter your name:\n";
    cin.getline(student.name,15);
    cout<<"\n Enter your NIM:\n";
    cin.getline(student.nim,10);
    cout<<"\nEnter your primary address\n";
    cin.getline(student.address,100);
    cout<<"\nEnter you last IPK:\n";
    cin>>student.scoreIPK;



    cout<<"Name :"<<student.name<<"\n";
    cout<<"NIM :"<<student.nim<<"\n";
    cout<<"Address:"<<student.address<<"\n";
    cout<<"IPK :"<<student.scoreIPK;

}
