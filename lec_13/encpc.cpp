#include <iostream>
#include <vector>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }
    // getter
    double getBalance()
    {
        return balance;
    }

    // method to deposit

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Amount : " << amount << endl;
        }
        else
        {
            cout << "Invalid Amount!!";
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawed Amount : " << amount << endl;
        }
        else
        {
            cout << "Invalid Amount!!";
        }
    }
};

int main()
{
    BankAccount myAccount("123456789",500);
    myAccount.deposit(500);
    myAccount.withdraw(100);
    return 0;
}