#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void from12Hour ();
void from24Hour ();
void strdTime (int hour, int minute, string ampm);
void miltTime (int hour, int minute);

int outHour ();
int outMinute ();
string outAmpm ();

void showChoices ()
{
    cout << "\nPlease pick either 1, 2, or 9:" << endl;
    cout << "1: Convert from 12-hour to 24-hour." << endl;
    cout << "2: Convert from 24-hour to 12-hour." << endl;
    cout << "9: To exit the program." << endl;
    cout << endl;
}

void from24Hour ()
{
    int hour, minute;
    string ampm = " ";

    cout << "Enter the hour, minute." << endl;

    cout << "Hour: ";
    hour = outHour ();
    cout << endl;

    cout << "Minute: "; 
    minute = outMinute ();
    cout << endl;

    if (hour % 12 == 0)
    {
        ampm = "AM";
    }
    else if (hour % 12 > 0)
    {
        ampm = "PM";
        hour = hour % 12;
    }
         
    strdTime (hour, minute, ampm);

    return;
}

void from12Hour ()
{
    int hour, minute;
    string ampm = " ";

    cout << "Enter the hour, minute, and time of day." << endl;

    cout << "Hour: ";
    hour = outHour ();
    cout << endl;

    cout << "Minute: "; 
    minute = outMinute ();
    cout << endl;

    cout << "Time of day (AM or PM): ";
    ampm = outAmpm ();
    cout << endl;

    if (ampm == "PM")
    {
        hour = hour + 12;
    }

    miltTime (hour, minute);
    
    return;
}

int outHour ()
{
    int hour;
    cin >> hour;
    return hour;
}

int outMinute ()
{
    int minute;
    cin >> minute;
    return minute;
}

string outAmpm ()
{
    string ampm;
    cin >> ampm;
    return ampm;
}

void strdTime (int hour, int minute, string ampm)
{
    char zero = ' ';
    if (minute < 10)
    {
        zero = '0';
    }
    cout << "The time is now: " << hour << ":" << zero << minute << " " << ampm << endl;
}

void miltTime (int hour, int minute)
{
    char zero = ' ';
    char hourZero = ' ';

    if (hour < 10)
    {
        hourZero = '0';
    }
    if (minute < 10)
    {
        zero = '0';
    }
    cout << "The time is now: " << hourZero << hour << ":" << zero << minute << endl;
}

int main ()
{
    int hour, minute; 
    int choice;
    string ampm = " ";

    cout << "Time Converter for 12-hour to 24-hour." << endl;

    do{
        showChoices ();
        cin >> choice;
        cout << endl;
    
        switch(choice)
        {
            case 1:
                from12Hour ();
                break;
            case 2: 
                from24Hour ();
                break;
            case 9:
                cout << "Existing the program." << endl;
                break;

            default: 
                cout << "Invalid choice." << endl;
        }
    }
    while (choice != 9);

    return 0;
}
