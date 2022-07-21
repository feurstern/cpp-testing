#include<iostream>
#include<complex>
#include<cmath>

using namespace std;
typedef complex<double> C;


int main(){
    C x(3,4);
    C z;
    z = C(2,7);
    C i(0,1);

    cout<<"z ="<<z<<endl;
    cout<<"x ="<<x<<endl;
    cout<<"z+x"<<z+x<<endl;
    cout<<"z*x="<<z*x<<endl;
    cout<<"z/x="<<z/x<<endl;

    return EXIT_SUCCESS;


}