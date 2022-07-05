#include<iostream>
#include<array>
#include<stdexcept>

using namespace std;

int main(void){
    array<int,6> examScore = {90,70,75,80,56,95};

   

    for(int i=0; i<=sizeof(examScore)/sizeof(examScore[0]);i++){
        cout<<examScore[i]<<endl;
    }

    cout<<sizeof(examScore)/sizeof(examScore[0]);
}
  