#include<iostream>

using namespace std;

int main(){
   int x =5;
   for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
        if(j<=i){
            cout<<x<<", ";
        }
    }

    x-=7;
   }
}