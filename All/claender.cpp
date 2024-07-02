 /*#include <iostream>

int main() {
    // Define the number of days in Ramadan
    const int days_in_ramadan = 30;

    // Loop through each day and print the date
    for (int day = 1; day <= days_in_ramadan; ++day) {
        std::cout << "Day " << day << ": Ramadan" << std::endl;
    }

    // You can customize the output as per your preference, adding more details or formatting as needed.
    
    return 0;
}
*/


 /*#include <iostream>

int main() {
    // Define the number of days in Ramadan
    const int days_in_ramadan = 30;

    // Define Iftar (aftari) time in 24-hour format (hh:mm)
    const std::string iftar_time = "19:30";

    // Define Suhoor (sheri) time in 24-hour format (hh:mm)
    const std::string suhoor_time = "04:30";

    // Loop through each day and print the date, Iftar, and Suhoor times
    for (int day = 1; day <= days_in_ramadan; ++day) {
        std::cout << "Day " << day << ": Ramadan" << std::endl;
        std::cout << "Iftar Time: " << iftar_time << std::endl;
        std::cout << "Suhoor Time: " << suhoor_time << std::endl;
        std::cout << "-----------------------" << std::endl;
    }

    // You can customize the output and use a proper time library for more advanced time handling.

    return 0;
}
*/

/*
#include <iostream>
#include <ctime>

int main() {
    // Define the number of days in Ramadan
    const int days_in_ramadan = 30;

    // Define initial Iftar (aftari) and Suhoor (sheri) times in minutes past midnight
    int iftar_time_minutes = 1170; // 19:30 in minutes
    int suhoor_time_minutes = 270; // 04:30 in minutes

    // Loop through each day and print the date, Iftar, and Suhoor times
    for (int day = 1; day <= days_in_ramadan; ++day) {
        // Convert minutes to hours and minutes for better display
        int iftar_hours = iftar_time_minutes / 60;
        int iftar_minutes = iftar_time_minutes % 60;

        int suhoor_hours = suhoor_time_minutes / 60;
        int suhoor_minutes = suhoor_time_minutes % 60;

        std::cout << "Day " << day << ": Ramadan" << std::endl;
        std::cout << "Iftar Time: " << iftar_hours << ":" << iftar_minutes << std::endl;
        std::cout << "Suhoor Time: " << suhoor_hours << ":" << suhoor_minutes << std::endl;
        std::cout << "-----------------------" << std::endl;

        // Update times for the next day (for demonstration purposes, adjust as needed)
        iftar_time_minutes += 1; // Increase Iftar time by 1 minutes each day
        suhoor_time_minutes -= 1; // Decrease Suhoor time by 1 minute each day
    }

    return 0;
}


#include <iostream>

using namespace std;

int main() {
  // Declare variables
  int day, month, year;
  int sunrise_time, sunset_time;
  int sheri_time, iftar_time;

  // Get the current date
  day = 14;
  month = 11;
  year = 2023;

  // Calculate the sunrise and sunset times for the current date
  sunrise_time = 6; // Replace with the actual sunrise time for the current date
  sunset_time = 18; // Replace with the actual sunset time for the current date

  // Calculate the Sehri and Iftar times
  sheri_time = sunrise_time - 30;
  iftar_time = sunset_time + 10;

  // Display the Sehri and Iftar times
  cout << "Sehri time: " << sheri_time << endl;
  cout << "Iftar time: " << iftar_time << endl;

  return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
    const int days_in_ramadan = 30;
    int iftar_time_minutes = 1170; // 19:30 in minutes
    int suhoor_time_minutes = 270; // 04:30 in minutes
    for (int day = 1; day <= days_in_ramadan; ++day) 
    {
        int iftar_hours = iftar_time_minutes / 60;
        int iftar_minutes = iftar_time_minutes % 60;
        int suhoor_hours = suhoor_time_minutes / 60;
        int suhoor_minutes = suhoor_time_minutes % 60;
        cout << "Day " << day << ": Ramadan" << endl;
        cout << "Iftar Time: " << iftar_hours << ":" << iftar_minutes << endl;
        cout << "Suhoor Time: " << suhoor_hours << ":" << suhoor_minutes << endl;
        cout << " ------------------------- \n";
        iftar_time_minutes += 1; 
        suhoor_time_minutes -= 1; 
    }
    return 0;
}
