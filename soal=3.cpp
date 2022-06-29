#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<string> userInput;
    string input;
    while(cin>>input){
        userInput.push_back(input);
         cout<<"\nSaya punya "<<input<<", "<<endl;
    }

   //const char* watches[3] = {"Swiss Army","Dublot","G-Shock"};

   // cout<<"Saya punya "<<watches[0]<<", "<<watches[1]<<", "<<", "<<watches[2];

 system("pause");
 return EXIT_SUCCESS;
}