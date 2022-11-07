#include<iostream>

using namespace std;

void findNumber(int result, int value1, int value2){

        result = value1;
        while(result%value2!=0){
            result+=value1;
        }
        cout<<"The result from "<<value1<<" and"<<value2<<" is "<<result;

}

int main(){
    int result, value1,  value2;
    cin>>value1;    
    cin>>value2;

    findNumber(result, value1,value2);



}