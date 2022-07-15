#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;


void findOddNumber(int n){
    for(int i=1; i<=n;i++){     
        if(i%2==1){
                 cout<<"\tOdd ";
            
        }
    } 

     for(int i=1; i<=n;i++){        
            if(i%2==0){     
                    cout<<"\t "<<i;
            
        }   
    }       

    }   

void findEvenNUmber(int n){
      for(int i=1; i<=n;i++){   
        if(i%2==0){
                 cout<<"\t "<<i;
            
        }
    }    
}

int main(){ 
    int n;  
    cin>>n; 
    findEvenNUmber(n);
    findOddNumber(n);
    cout<<"\nPlease press any key to terminate the program";

    cin.get();



    return 0;
}