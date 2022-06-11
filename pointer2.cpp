/* dear future Rio. Remember that day? 
When you neglected to learn programming language and prefer to learn foreing language such as Japanese instead?
When you think that you've chosen the wrong path of major?
When you think that you want to change it instead?
And now you've realized that you are absolutely wrong. You tried to pay back what you have done
during you're wasting your time?

Okay, don't take it personally. No one could avoiding the failure. Then good luck for future!
2 May 2022

Rio */

#include<iostream>

using namespace std;

int main(){
    int x, y;
    int width(6);
    int age[4] = {18,19,20,30};
    cout<<"Enter for the value of x:";
    cin>>x>>y;

    int z(x*y);
    cout<<"\nThe result of "<<x<<"*"<<y<<" is "<<z;
    cout<<"\n"<<width;
    
    cout<<"\nThis the memory location every variable that used on this program";
    cout<<"\n The memory address of x:"<<&x;
    cout<<"\nThe memory address of y:"<<&y;
    cout<<"\nThe memory address of z:"<<&z;
    cin.get();
    cout<<"\nPlease press any ke to terminate the program";

}