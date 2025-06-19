/*LEVEL 4:
Create Class bankAccount-private Balance,deposite/withdraw method*/
#include<iostream>
using namespace std;
class BankAccount
{
    private:
    float balance;
    public:
    void showCurent() 
    {
        cout << "Old Balance:" << balance << endl;
    }
    BankAccount()
    {
        balance = 2500;
    }
    void Deposite(float amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout <<"Deposite :"  <<amount <<endl;
        }
        else
        {
            cout <<"Invalid Deposite Amount" <<endl;
        }
    }
    void withdraw(float amount)
    {
        if (amount> 0 && amount <= balance)
        {
            balance = balance - amount;
            cout <<"Withdraw :" <<amount <<endl;
        }
        else
        {
            cout <<"Insiffient Balance:" <<endl;
        }
    }
     // Function to display current balance
    void showBalance() 
    {
        cout << "Current Balance:" << balance << endl;
    }
};
int main()
{
    BankAccount b1;
    b1.showCurent();
    b1.Deposite(500);
    b1.withdraw(200);
    b1.showBalance();
    return 0;
}