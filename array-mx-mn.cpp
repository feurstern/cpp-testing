#include<iostream>

using namespace std;


int main(){
    int value[10] = {12,34,66,11,4,66,90,17,45,123};

    int sizeofvalue = sizeof value;

    int max = -1000;
    int min = 1000;

    for(int i=0; i>=10;i++){
        if(value[i]>max){
            max = value[i];
        }
        if(value[i]<min){
            min = value[i];
        }
    }

    cout<<"The maximum number is:"<<max<<endl;
    cout<<"THe minimun number is:"<<min;
}