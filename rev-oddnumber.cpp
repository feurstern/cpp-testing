#include<iostream>

using namespace std;

void findOddNumber(int n){
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<i<<", ";
        }
    }
}

void findEvenNumber(int n){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<", ";
        }
    }
}

int main(){
    int n;
    cin>>n;

    findOddNumber(n);
    cout<<endl;
    findEvenNumber(n);
}