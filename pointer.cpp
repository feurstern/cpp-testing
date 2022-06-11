#include<iostream>
#include<cstdlib>

using namespace std;

int main(){

    //addressing a pointer
    char user = 'A';
    char *user2= &user;

    cout<<*user2;
}