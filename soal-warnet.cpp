#include<iostream>
#include<math.h>


using namespace std;

int main(){
    float userTime;
    int billingCost = 130/30;
    cout<<"Enter the biling of your account: \n";
    cin>>userTime;

    int userTimeSecond= userTime*60*60;
    cout<<userTimeSecond<<endl;

    int total = userTimeSecond * billingCost;

    cout<<"You got biling " <<userTimeSecond<<"sc\n"
    <<"You have to pay your bill: Rp."<<total;




}