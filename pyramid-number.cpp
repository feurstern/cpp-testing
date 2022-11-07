#include<iostream>

using namespace std;

void numberPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int n;

    cin>>n;

    numberPattern(n);

}


