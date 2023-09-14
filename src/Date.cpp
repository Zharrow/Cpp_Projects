#include "Date.h"
#include <iostream>

using namespace std;

Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}

void Date::inputDate()
{
    bool isValid = true;
    cout << "Day Class (DD/MM/YY)\n";

    while (isValid)
    {
        /** Input Day
        Asking the user to choose the day
        */
        cout << "Day: ";
        cin >> day;
        if (day < 1 || day > 31)
        {
            cout << "Choose a day between 1 and 31\n";
            continue;
        }

        /** Input Month
        Asking the user to choose the month
        */
        cout << "Month: ";
        cin >> month;
        if (month < 1 || month > 12)
        {
            cout << "Choose a month between 1 and 12\n";
            continue;
        }

        /** Input Year
        Asking the user to choose the year
        */
        cout << "Year: ";
        cin >> year;
        if (year < 1 || year > 9999)
        {
            cout << "Choose a year between 1 and 9999\n";
            continue;
        }
        /** Breaking the while loop
        We got our data for the day of this course
        */
        break;
    }
    cout << "\nThis course was on " << day <<
     "/" << month << "/" << year << ".\n";
}
