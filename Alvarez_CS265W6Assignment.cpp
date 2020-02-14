#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;



int doubleNum(int randomNum) // doubled random number.
{
    int count = 0, total;

    cout << "The random number doubled is: " << 2 * randomNum << endl;

    if(2 * randomNum < 10)
    {
        randomNum = 2 * randomNum + 10;
    }
    else 
    {
        for(int i = 2; i < 2 * randomNum; i++)
            if (2 * randomNum % i == 0)
                count++;
    }
    if(count > 1)
        cout << 2 * randomNum << " is not a prime number" << endl;
    else
        cout << 2 * randomNum << " is a prime number." << endl;

    return 2 * randomNum;
}

int reverse(int randomNum)
{
    int digit, digit1, count = 0, total;
    digit = randomNum % 10;
    digit1 = randomNum / 10;
    cout << "The numbers reversed are: " << digit << digit1 << endl;

    for(int i = 2; i < randomNum; i++)
        if (randomNum % i == 0)
            count++;

    if(count > 1)
        cout << digit << digit1 << " is not a prime number" << endl;
    else
        cout << digit << digit1 << " is a prime number." << endl;

    return digit, digit1;
}

int power(int randomNum, int powered)
{
    int i = 1, choice, count = 0;
    double result;
    while(i < powered)
    {
        result = pow(randomNum, powered);
        cout << "The number raised by " << powered << " is "<< result << endl;

    if(result < 10)
    {
        result = result + 10;
    }
    else 
    {
        for(int i = 2; i < randomNum; i++)
            if (randomNum % i == 0)
                count++;
    }
    if(count > 1)
        cout << result << " is not a prime number" << endl;
    else
        cout << result << " is a prime number." << endl;

        return result;
    }
}

int add(int randomNum)
{
    int digit, digit1, sum, count = 0, total;
    digit = randomNum / 10;
    digit1 = randomNum % 10;
    sum = digit + digit1;
    cout << "The random number added together is: " << sum << endl;

    if(sum < 10)
    {
        sum = sum + 10;
    }
    else 
    {
        for(int i = 2; i < randomNum; i++)
            if (randomNum % i == 0)
                count++;
    }
    if(count > 1)
        cout << sum << " is not a prime number" << endl;
    else
        cout << sum << " is a prime number." << endl;

    return sum;
}

int autoPower(int randomNum)
{
    int i = 1;
    int digit, digit1, count = 0;
    double result;
    digit = randomNum / 10;
    digit1 = randomNum % 10;
    while(i < digit1)
    {
        result = pow(digit, digit1);
        cout << "First digit raised by the second digit is: " << result << endl;

        if(result < 10)
        {
            result = result + 10;
        }
        else 
        {
            for(int i = 2; i < randomNum; i++)
                if (randomNum % i == 0)
                    count++;
        }
        if(count > 1)
            cout << result << " is not a prime number" << endl;
        else
            cout << result << " is a prime number." << endl;
            
        return result;
    }
}

int main()
{
    int randomNum, choice, powered, count = 0, i;

    srand (time(NULL)); // random time seed.
    randomNum = rand() % (99 - 10 + 1) + 10; // random generated number between 10-99.

    cout << "Random Number is " << randomNum << endl; // gets the random number.
    cout << "What would you like to do?" << endl; // asks user for their choice.

    cout << "1. Double the number." << endl;
    cout << "2. Reverse the digits of the number." << endl;
    cout << "3. Raise the number to the power of 2, 3, or 4." << endl;
    cout << "4. Find the sum of the digits." << endl;
    cout << "5. Raise the first digit by the second digit." << endl;
    cout << "Please input the numbered selection: ";
    cin >> choice;

    while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
    {
        if(choice > 5)
        cout << "Enter in a valid input between 1 and 5." << endl;
        cin.clear();
        cin >> choice;
    }

    switch(choice)
    {
        case 1:
            doubleNum(randomNum);
            break;
        
        case 2:
            reverse(randomNum);
            break;

        case 3:
            cout << "What power do you want the number raised to 2, 3, or 4? ";
            cin >> powered;

            while(choice != 2 && choice != 3 && choice != 4)
            {
                if(choice != 2 && choice != 3 && choice != 4)
                cout << "Enter in a valid selection." << endl;
                cin.clear();
                cin >> choice;
            }
            power(randomNum, powered);
            break;

        case 4: 
            add(randomNum);
            break;

        case 5:
            autoPower(randomNum);
            break;
    }
    printf("Press any key to continue...");
    getch();
    return 0;
}