#include<iostream>
#include<stdlib.h>
#include<cstdio>


using namespace std;

int main(){
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    int nArg1 =0x78ABCDEF;
    int nArg2 =0x12345678;

    cout << " nArg1 = 0x" << nArg1 << endl;
cout << "~nArg1 = 0x" << ~nArg1 << "\n" << endl;
cout << " nArg2 = 0x" << nArg2 << endl;
cout << "~nArg2 = 0x" << ~nArg2 << "\n" << endl;
// now the binary operators
cout << " 0x" << nArg1 << "\n"
<< "& 0x" << nArg2 << "\n"
<< " ----------" << "\n"
<< " 0x" << (nArg1 & nArg2) << "\n"
<< endl;
cout << " 0x" << nArg1 << "\n"
<< "| 0x" << nArg2 << "\n"
<< " ----------" << "\n"
<< " 0x" << (nArg1 | nArg2) << "\n"
<< endl;
cout << " 0x" << nArg1 << "\n"
<< "^ 0x" << nArg2 << "\n"
<< " ----------" << "\n"
<< " 0x" << (nArg1 ^ nArg2) << "\n"
<< endl;
// wait until user is ready before terminating program
// to allow the user to see the program results
cout << "Press Enter to continue..." << endl;
cin.ignore(10, '\n');
cin.get();


}   