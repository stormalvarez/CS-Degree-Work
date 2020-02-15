/* C++ main file for testing
 * Created on: Feb 14, 2019. 
 * By: Storm Alvarez
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include "bankAccount.h"
using namespace std;

void bankAccount::deposit()
{
    double amount; // The amount of money.

    cout<<"Enter the amount you wish to deposit: $";
    cin>>amount;
    balance += amount;
    bankAccount::updateBalance();
    bankAccount::getInterest();
}

void bankAccount::withDraw()
{
    double amount; // The amount of money.

    cout<<"Enter the amount you wish to withdraw: $";
    cin>>amount;
    if(amount > balance)
        cout<<"Amount withdrew is over the amount in account."<<endl;
    balance -= amount;
    bankAccount::updateBalance();
    bankAccount::getInterest();
}

void bankAccount::getInterest()
{
    int endValue;

    endValue = pow(1, 12);
    balance = balance * (1 + interestRate / 12) * endValue;
}

double bankAccount::updateBalance()
{
    return balance;
}

void bankAccount::print()
{
    cout<<"--------------------------------";
    cout<<"\nAccount Number: #"<<accountNum;
    cout<<"\nAccount holders name: "<<holderName;
    cout<<"\nAccount type: "<<accType;
    cout<<"\nCurrent Balance: $"<<balance;
    cout<<"\nAccounts interest rate: "<<interestRate<<"%";
    cout<<endl;
}

int bankAccount::getAccountNumber()
{
    return accountNum;
}

string bankAccount::getAccountHolderName()
{
    return holderName;
}

string bankAccount::getAccountType()
{
    return accType;
}

double bankAccount::getInterestRate()
{
    return interestRate;
}

void bankAccount::getBalance()
{
    cout<<"Enter the current balance of the account: $";
    cin>>balance;
    bankAccount::updateBalance();
}

bankAccount::bankAccount(int accountNum, string holderName, string accType, double balance, double interestRate)
{
    bankAccount::accountNum = accountNum = rand() % (10 - 1 + 1) + 1; // Temp amount 1 - 10.
    bankAccount::holderName = holderName;
    bankAccount::accType = accType;
    bankAccount::balance = balance;
    bankAccount::interestRate = interestRate;
}

bankAccount::bankAccount()
{
    accountNum = 0;
    holderName = " ";
    accType = " ";
    balance = 0;
    interestRate = 0;
}
