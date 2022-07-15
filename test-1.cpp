#include<iostream>

using namespace std;


void findOddNumber(int n){
   

    for (int i=0;i<=n;i++){
        if(i%2==1){
            
           result ="Odd";
            if(i%2==0){
                 
                 z = i;
                
            }
                cout<<result<<z;
           
        }
     
    }
}

int main(void){

    int n;
    cin>>n;
    findOddNumber(n);

}