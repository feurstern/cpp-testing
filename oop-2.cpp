#include<iostream>

using namespace std;
//23 - 30 hiredtoday

class PlayerCharacter{

    string Username;
    string Server;
    int Age;

    public:

        void setUsername(string username){
        Username = username;
    }

    string getUsername(){
        return Username;
    }

    void setServer(string server){
        Server = server;
    }

    string getServer(){
        return Server;
    }


    void setAge( int age){
        Age = age;
    }

    int getAge(){
        return Age;
    }

    void PlayerInfo(){
        cout<<"Name: "<<getUsername();
        cout<<"\nServer: "<<getServer();
        cout<<"\nAge: "<<getAge();

        if(Server=="UK"){
            cout<<"Hello there, welcome to our Game!"<<endl;
        }
        else{
            cout<<"Konnichiwa, game he youkoso!"<<endl;
        }
    }


    // CONSTRUCTORS
     PlayerCharacter(string username, string server, int age){
        Username = username;
        Server = server;
        Age = age;
    }



};


class CharacterRace:public PlayerCharacter{
    string Race;

    public:
        void setRace(string race){
            Race= race;
        }

        string getRace(){
            return Race;
        }


        void RaceInfo(){
            cout<<"Enter your main race:"<<endl;
            cin>>Race;


        cout<<"Name: "<<getUsername();
        cout<<"\nServer: "<<getServer();
        cout<<"\nAge: "<<getAge();

        if(getServer()=="UK"){
            cout<<"Hello there, welcome to our Game!"<<endl;
        }
        else{
            cout<<"Konnichiwa, game he youkoso!"<<endl;
        }
    }

    //constructor

    CharacterRace(string username, string server, int age, string race): PlayerCharacter(username, server, age){
        Race = race;
    }
        

};


int main(){
    PlayerCharacter player1 = PlayerCharacter("Mikuu-chan", "JP",24);

    player1.PlayerInfo();
    
}