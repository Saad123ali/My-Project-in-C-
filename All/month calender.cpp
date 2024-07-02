 #include <iostream>
#include <iomanip>

int main() {
    // Get the month and year from the user
    int month, year;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;
    std::cout << "Enter the year: ";
    std::cin >> year;

    // Print the calendar header
    std::cout << "   " << std::setw(10) << std::left << "Sun"
              << std::setw(4) << "Mon" << std::setw(4) << "Tue"
              << std::setw(4) << "Wed" << std::setw(4) << "Thu"
              << std::setw(4) << "Fri" << std::setw(4) << "Sat" << std::endl;

    // Calculate the day of the week for the first day of the month
    // Note: Zeller's Congruence algorithm can be used for more accurate calculations
    int dayOfWeek = (1 + month * 13 / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    // Print leading spaces based on the day of the week for the first day
    for (int i = 0; i < dayOfWeek; ++i) {
        std::cout << std::setw(8) << " ";
    }

    // Get the number of days in the given month
    int daysInMonth;
    switch (month) {
        case 2:
            daysInMonth = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; ++day) {
        std::cout << std::setw(4) << day;
        if ((day + dayOfWeek) % 7 == 0 || day == daysInMonth) {
            std::cout << std::endl;
        }
    }

    return 0;
}

