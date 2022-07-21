#include<iostream>
#include<string.h>


using namespace std;

void greetings(){
    cout<<"Welcome to our Program.\n";
    cout<<"Made by Muhammad Rio Kurniawan";
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




}
