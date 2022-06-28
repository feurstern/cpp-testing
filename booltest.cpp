#include<iostream>
#include<stdlib.h>
#include<cstdio>


using namespace std;

int abc(int a, int b, int c){
    return a*b*c;
}


int main(){
    cout.setf(cout.boolalpha);

    int n1;
    cout<<"Enter first score:"<<endl;
    cin>>n1;

    int n2;
    cout<<"Enter seconds score"<<endl;
    cin>>n2;


    bool b = n1==n2;

    cout<<"The statements, "<<n1
        << " equals " <<n2
        <<" is "<<b
        <<endl;

    cout<<"\n"<<abc(7,6,8);
    cout<<"Press enter to terminate the programe";
    cin.ignore(10,'\n');
    cin.get();
        
    return 0;
}