#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int month, year;

    // Get the month and year from the user
    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    // Validate the month input
    if (month < 1 || month > 12) {
        cout << "Invalid month entered. Please enter a month between 1 and 12.\n";
        return 1;
    }

    // Calculate the number of days in the given month
    int daysInMonth;

    if (month == 2) {
        // Validate February for leap years
        daysInMonth = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    // Print the calendar header
    cout << "\n   Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    // Calculate the day of the week for the first day of the month
    int startDay = (1 + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // Nested loops to print the calendar
    int dayCounter = 1;

    for (int i = 0; i < startDay; ++i) {
        cout << setw(5) << " ";
        dayCounter++;
    }

    for (int day = 1; day <= daysInMonth; ++day) {
        cout << setw(5) << day;

        if (dayCounter % 7 == 0) {
            cout << endl;
        }

        dayCounter++;
    }

    return 0;
}
