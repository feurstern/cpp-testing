#include <iostream>

using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double openingBalance)
    {
        balance = openingBalance;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        balance -= amount;
    }
    void display()
    {
        cout << "Your balance is " << balance << "$\n";
        cout << "Do you have another transactions?\n";
    }
};

int main()
{
    BankAccount usr1(350.50);
    cout << "Before transactions\n";
    usr1.display();

    usr1.deposit(900.0);
    cout << "After deposit\n";
    usr1.display();

    // you bought gaming chair
    usr1.withdraw(75.7);
    cout << "After bought gaming chair\n";
    usr1.display();

    return EXIT_SUCCESS;
}