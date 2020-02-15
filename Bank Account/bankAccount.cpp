/* C++ main file 
 * Created on: Feb 14, 2019. 
 * By: Storm Alvarez
 */
#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
#include "bankAccount.h"
using namespace std;

void menu() // Selection menu.
{
    cout<<"--------------------------------"<<endl;
    cout<<"1. Make a deposit."<<endl;
    cout<<"2. Make a withdraw."<<endl;
    cout<<"3. Display account information."<<endl;
    cout<<"4. Terminate the program."<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Your selection: ";
}

int main()
{
    int pick;
    const int size = 10;
    int accountNum; // The account number. 
    int choice; // Users input. 
    bankAccount accSize[10];

    cout<<fixed<<showpoint<<setprecision(2); // Allows decimal like values.
    
    accSize[0] = bankAccount(accountNum, "Jim", "Checking", 675.00, 0.45);
    accSize[1] = bankAccount(accountNum, "Adam", "Checking", 823.25, 0.25);
    accSize[2] = bankAccount(accountNum, "Jace", "Savings", 805.75, 0.15);
    accSize[3] = bankAccount(accountNum, "Erica", "Checking", 759.23, 0.18);
    accSize[4] = bankAccount(accountNum, "Lacy", "Savings", 752.14, 0.23);
    accSize[5] = bankAccount(accountNum, "Vanessa", "Checking", 825.61, 0.26);
    accSize[6] = bankAccount(accountNum, "Rose", "Savings", 982.65, 0.32);
    accSize[7] = bankAccount(accountNum, "Manuel", "Checking", 821.14, 0.25);
    accSize[8] = bankAccount(accountNum, "John", "Checking", 853.63, 0.36);
    accSize[9] = bankAccount(accountNum, "Cole", "Savings", 789.68, 0.29);

    cout<<"Welcome to the bank!"<<endl;
    cout<<"Select which account to see information about."<<endl;
    cout<<"Pick between 0 and 9: ";
    cin>>pick;
    cout<<"Displaying account information.."<<endl;
    accSize[pick].print();

    do // Displays the menu. 
    {
        menu();
        cin>>choice;
        cout<<endl;

        switch(choice) // Then based on User input from choice picks these choices.
        {
            case 1:
                accSize[pick].deposit();
                accSize[pick].updateBalance();
                break;

            case 2:
                accSize[pick].withDraw();
                accSize[pick].updateBalance();
                break;

            case 3:
                accSize[pick].print();
                break;

            case 4:
                cout<<"Terminating program..."<<endl;
                break;

            default:
                cout<<"Invalid input."<<endl;
        }
    }
    while(choice != 4);
    return 0;
}
