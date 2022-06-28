#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;


void findOddNumber(int n){
    for(int i=1; i<=n;i++){
        if(i%2==0){
            cout<<"\n"<<i;      
        }
    }    

}

int main(){
    int n;
    cin>>n;
    findOddNumber(n);   
    cout<<"\nPlease press any key to terminate the program";

    cin.get();



    return 0;
}