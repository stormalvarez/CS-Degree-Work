#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void display(char plane[13][6])
{
    int i, x;
    cout << "\n* Shows all the currently available seats." << endl;
    cout << "X Shows all the seats that are currently taken.\n" << endl;
    cout << setw(11) << "A" << setw(5) << "B" << setw(5) << "C"
        << setw(5) << "D" << setw(5) << "E" << setw(5) << "F" << endl;

    for(i = 0; i < 13; i++)
    {
        cout << left << setw(3) << "Row " << setw(2) << i+1;
        for(x = 0; x < 6; x++)
        {
            cout << right << setw(5) << plane[i][x];
        }
        cout << endl;
    }
}

void assign(char plane[13][6])
{
    int type, row; 
    unsigned char seat;

    cout << "\nPlease Select a ticket type for your flight:" << endl;
    cout << "1. First Class." << endl;
    cout << "2. Business Class." << endl;
    cout << "3. Economy Class." << endl;
    cout << "Enter your selection: ";
    cin >> type;

    if(type == 1)
    {
        cout << "Enter a seat between rows 1 - 2 and seats A - F" << endl;
        cout << "Please enter in your desired seat: ";
        cin >> row >> seat;
        row = row - 1;
        seat = seat - 'A';
        if(row >= 1 && row <= 2 && seat >= 'A' && seat <= 'F')
        {
            cout << "Entered in an invalid row and/or seat. Please try again..." << endl;
        }
        else if(plane[row][seat] == 'X')
        {
            cout << "\nThat seat is currently taken. Please pick another." << endl;
        }
        else
        {
            cout << "Seat Confirmed! Currently updating...." << endl;
            plane[row][seat] = 'X';
        }
    }
    else if(type == 2)
    {
        cout << "Enter a seat between rows 3 - 7 and seats A - F" << endl;
        cout << "Please enter in your desired seat: ";
        cin >> row >> seat;
        row = row - 1;
        seat = seat - 'A';
        if(row >= 3 && row <= 7 && seat >= 'A' && seat <= 'F')
        {
            cout << "Entered in an invalid row and/or seat. Please try again..." << endl;
        }
        else if(plane[row][seat] == 'X')
        {
            cout << "\nThat seat is currently taken. Please pick another." << endl;
        }
        else
        {
            cout << "Seat Confirmed! Currently updating...." << endl;
            plane[row][seat] = 'X';
        }
    }
    else if(type == 3)
    {
        cout << "Enter a seat between rows 8 - 13 and seats A - F" << endl;
        cout << "Please enter in your desired seat: ";
        cin >> row >> seat;
        row = row - 1;
        seat = seat - 'A';
        if(row >= 8 && row <= 13 && seat >= 'A' && seat <= 'F')
        {
            cout << "Entered in an invalid row and/or seat. Please try again..." << endl;
        }
        else if(plane[row][seat] == 'X')
        {
            cout << "\nThat seat is currently taken. Please pick another." << endl;
        }
        else
        {
            cout << "Seat Confirmed! Currently updating...." << endl;
            plane[row][seat] = 'X';
        }
    }
    else 
    {
        cout << "Please enter a valid ticket type." << endl;
    }
}

void cancelSeat(char plane[13][6])
{
    int row; 
    unsigned char seat;

    cout << "Enter the seat you wish to cancel: ";
    cin >> row >> seat;
    row = row - 1;
    seat = seat - 'A';
    if(plane[row][seat] != 'X')
    {
        cout << "That seat is currently open." << endl;
    }
    else 
    {
        cout << "Seat has been canceled." << endl;
        plane[row][seat] = '*';
    }
}

void printMenu()
{
    cout << "\n---------------Menu---------------" << endl;
    cout << "1. Reserve a seat." << endl;
    cout << "2. Cancel reservation." << endl;
    cout << "3. Display Seating Chart." << endl;
    cout << "4. Exit program." << endl;
    cout << "----------------------------------" << endl;
    cout << "Enter your selection: ";
}

int menu()
{
    int type;
    cout << "\nWelcome, please select from the options below." << endl;
    cout << "Which type of ticket would you like to purchase?" << endl;
    printMenu();
    cin >> type;

    while(type < 1 || type > 4)
    {
        cout << "\nInvalid selection! Please pick again, sorry." << endl;
        printMenu();
        cin >> type;
    }
    return type;
}

int main()
{
    char plane[13][6];

    for(int i = 0; i < 13; i++)
    {
        for(int x = 0; x < 6; x++)
        {
            plane[i][x]='*';
        }
    }

    while(true)
    {
        int choice = menu();

        if(choice == 1)
        {
            assign(plane);
        }
        else if(choice == 2)
        {
            cancelSeat(plane);
        }
        else if(choice == 3)
        {
            display(plane);
        }
        else if(choice == 4)
        {
            cout << "Exiting program..." << endl;
            break;
        }
        else
        {
            cout << "\nInvalid input. Please try again...\n" << endl;
        }
    }
    return 0;
}
