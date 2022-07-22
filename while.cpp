#include<iostream>

using namespace std;

int main(){

    int userCount;

    cout<<"Enter the value of looping:"<<endl;
    cin>>userCount;


    while (userCount>0)
    {
        userCount-=1;
        cout<<"\nOnly "<<userCount<<" left";
    }
    
}