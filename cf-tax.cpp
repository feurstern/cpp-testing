#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int tax, salary;
        salary = 0;
        cout << "Enter the your salary\n";
        cin >> salary;

        if (salary > 100)
        {
            salary -= 10;
            cout << salary;
        }
        else
        {
            cout << salary;
        }
        return 0;
    }
}
