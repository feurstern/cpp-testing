#include<iostream>
using namespace std;

void checknumber(int n){

    for (int i= 0; i<=n;i++){
        if(i%3==0){
            cout<<"\n"<<i<<" adalah kelipatan "<<"3"<<endl;
        }
        else if(i%5==0){

            cout<<"\n"<<i<<" adalah kelipatan"<<i<<" dan "<<"5"<<endl;


        }    
    }
}


int main(){
    
    int n;
    cout<<"Masukkan bilangan bulat"<<endl;
    cin>>n;

    checknumber(n);

    system("pause");
    return EXIT_SUCCESS;
}