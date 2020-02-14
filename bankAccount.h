/* h file for class definition
 * Created on: Feb 14, 2019. 
 * By: Storm Alvarez
 */

#ifndef ALVAREZ_CS285W1ASSIGNMENT_H_
#define ALVAREZ_CS285W1ASSIGNMENT_H_

#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

class bankAccount
{
    protected:
        string holderName; // Name of account holders.
        int accountNum; // The account number.
        string accType;// type of account.
        double balance; // Shows account balance for customer.
        double interestRate; // The interest rate. 
        int randomMember; // Assigns account numbers during creation.

    public:
        bankAccount();
        bankAccount(int, string, string, double, double); // parametered constructor.

        void deposit();
        void withDraw();
        void getInterest();
        void print();
        void getBalance();

        double updateBalance();
        int getAccountNumber();
        string getAccountHolderName();
        string getAccountType();
        double getInterestRate();
};

#endif /* ALVAREZ_CS285W1ASSIGNMENT_H_ */