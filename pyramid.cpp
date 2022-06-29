#include<iostream>

using namespace std;

void numberOfPrint(int n){
   for(int i =0; i<=n;i++){
       for(int j=1; j<=i;j++){
           cout<<j;
       }
         cout<<endl;

   }
 
}

int main(){
    int n;
    cout<<"Enter a number:"<<endl; 
    cin>>n;

    numberOfPrint(n);
}