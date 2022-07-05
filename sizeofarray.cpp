#include<iostream>
#include<bits/stdc++.h>
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))


using namespace std;

int main(){
    const char* favouriteLanguage[4] ={"English", "German", "Japanese","Chinese"};

    int size = my_sizeof(favouriteLanguage);

    cout<<size;
    
}