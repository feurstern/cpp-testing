#include<iostream>

using namespace std;


void checknumber(int n){
    if(n%2==0){
        cout<<"Bilangain ini genap"<<endl;
    }
    else{
        cout<<"bilangan ini ganjil"<<endl;

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

