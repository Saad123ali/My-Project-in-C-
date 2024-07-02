#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;

int max = 100;
int car = 0, bus = 0, rickshaw = 0;
string cars[100], buses[100], rickshaws[100];

// Function to generate a unique token
// string generateToken() {
//     // Get current time
//     time_t now = time(0);
//     tm *ltm = localtime(&now);

//     // Format: YYYYMMDDHHMMSS + random number (2 digits)
//     string token = to_string(1900 + ltm->tm_year);
//     token += ((ltm->tm_mon + 1) < 10 ? "0" : "") + to_string(ltm->tm_mon + 1);
//     token += (ltm->tm_mday < 10 ? "0" : "") + to_string(ltm->tm_mday);
//     token += (ltm->tm_hour < 10 ? "0" : "") + to_string(ltm->tm_hour);
//     token += (ltm->tm_min < 10 ? "0" : "") + to_string(ltm->tm_min);
//     token += (ltm->tm_sec < 10 ? "0" : "") + to_string(ltm->tm_sec);

//     // Append random number (2 digits)
//     token += to_string(rand() % 100);

//     return token;
// }

// void mainpage();
// void customer();
// void Parking();
// void car();
// void bus();
// void rickshaw();
// void receiver();
// void adminmenu()
// {
//     cout << "\n\t___________________________________________\n";
//     cout << "\t|\t\t  Admin menu\t\t  |\n";
//     cout << "\t|_________________________________________|\n";
//     cout << "\t| " << setw(42) << "|\n";
//     cout << "\t| [1]  Show Record " << setw(25) << "|\n";
//     cout << "\t| [2]  Delete Record" << setw(24) << "|\n";
//     cout << "\t| [0]  Exit " << setw(32) << "|\n";
//     cout << "\t| " << setw(42) << "|\n";
//     cout << "\t|_________________________________________|\n\n";
//     cout << "\tEnter your choice: "; 
// }
// void customer() {
//     system("cls");
//     cout << "\t____________________________________________\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t| [1]  Parking" << setw(32) << "|\n";
//     cout << "\t| [2]  Receiver" << setw(31) << "|\n";
//     cout << "\t| [0]  Main page " << setw(29) << "|\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t|___________________________________________|\n\n";
//     cout << "\tEnter your choice: ";
// }

// void Parking() {
//     system("cls");
//     cout << "\t____________________________________________\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t| [1]  Car" << setw(36) << "|\n";
//     cout << "\t| [2]  Bus" << setw(36) << "|\n";
//     cout << "\t| [3]  Rickshaw " << setw(30) << "|\n";
//     cout << "\t| [0]  Main page " << setw(29) << "|\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t|___________________________________________|\n\n";
//     cout << "\tEnter your choice: ";
// }
// void Rickshaw() {
//     int rickshaw = 0;  // Initialize rickshaw variable
//     bool rick_page = false;
//     system("cls");
    
//     for (rickshaw; rickshaw < 100; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }
        
//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;
        
//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;
//             cout << "\tEnter the number of days (not above 10): ";
//             cin >> rickdays;
            
//             if (rickdays > 0 && rickdays <= 10) {
//                 // Provide token or perform relevant actions
//                 int rickbill = rickdays * 50;
//                 cout << "Total bill is: " << rickbill << endl;
//                 cout << "\tCar parked successfully! Token: " << endl;
//             } else {
//                 cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//                 continue;  // Ask the user to enter the number of days again
//             }
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }


// void Car() {
//     bool car_page = false;
//     system("cls");
//     for (car; car < 100; car++) {
//         if (car_page == true) {
//             break;
//         }
//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string carChoice;
//         cin >> carChoice;
//         if (carChoice == "y" || carChoice == "Y") {
//             int days;
//             cout << "\tEnter the number of days (not above 10): ";
//             cin >> days;
//             if (days > 0 && days <= 10) {
//                 // Provide token or perform relevant actions
//                 int carbill = days * 70;
//                 cout<<"Total bill is :" <<carbill<<endl;
//                 cout << "\tCar parked successfully! Token: "<< endl;
//             } else {
//                 cout << "\tInvalid number of days. Parking not allowed.\n";
//             }
//         } else if (carChoice == "n" || carChoice == "N") {
//             system("cls");
//             car_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }

// void Rickshaw() {
//    // int rickshaw = 0;  // Initialize rickshaw variable
//     bool rick_page = false;
//     system("cls");

//     for (rickshaw; rickshaw < 100; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }

//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;

//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;
//             do {
//                 cout << "\tEnter the number of days (not above 10): ";
//                 cin >> rickdays;

//                 if (rickdays > 0 && rickdays <= 10) {
//                     // Provide token or perform relevant actions
//                     int rickbill = rickdays * 50;
//                     cout << "Total bill is: " << rickbill << endl;
//                     cout << "\tCar parked successfully! Token: " << endl;
//                 } else {
//                     cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//                 }
//             } while (rickdays > 10);  // Repeat the prompt until a valid number of days is entered
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }


// void Rickshaw() {
//     //int rickshaw = 0;  // Initialize rickshaw variable
//     bool rick_page = false;
//     system("cls");

//     for (rickshaw; rickshaw < 100; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }

//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;

//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;
//             do {
//                 cout << "\tEnter the number of days (not above 10): ";
//                 cin >> rickdays;

//                 if (rickdays > 0 && rickdays <= 10) {
//                     // Provide token or perform relevant actions
//                     int rickbill = rickdays * 50;
//                     cout << "Total bill is: " << rickbill << endl;
//                     cout << "\tCar parked successfully! Token: " << endl;
//                     break;  // Exit the loop after displaying the bill
//                 } else {
//                     cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//                 }
//             } while (true);  // The loop will exit when a valid number of days is entered
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }

// void Rickshaw() {
//     //int rickshaw = 0;  // Initialize rickshaw variable
//     bool rick_page = false;
//     system("cls");

//     for (rickshaw; rickshaw < 100; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }

//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;

//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;
//             while (true) {
//                 cout << "\tEnter the number of days (not above 10): ";
//                 cin >> rickdays;

//                 if (rickdays > 0 && rickdays <= 10) {
//                     // Provide token or perform relevant actions
//                     int rickbill = rickdays * 50;
//                     cout << "Total bill is: " << rickbill << endl;
//                     cout << "\tCar parked successfully! Token: " << endl;
//                     break;  // Exit the loop after displaying the bill
//                 } else {
//                     cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//                 }
//             }
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }
 
// void Rickshaw() {
//     system("cls");

//     cout << "\tParking Fee: RS.70 per day\n";
//     cout << "\tDo you want to pay (y/n): ";
//     string rickChoice;
//     cin >> rickChoice;

//     if (rickChoice == "y" || rickChoice == "Y") {
//         int rickdays;

//         do {
//             cout << "\tEnter the number of days (not above 10): ";
//             cin >> rickdays;

//             if (rickdays > 0 && rickdays <= 10) {
//                 // Provide token or perform relevant actions
//                 int rickbill = rickdays * 50;
//                 cout << "Total bill is: " << rickbill << endl;
//                 cout << "\tCar parked successfully! Token: " << endl;
//                 break;  // Exit the loop after displaying the bill
//             } else {
//                 cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//             }
//         } while (true);  // Repeat until a valid number of days is entered
//     } else if (rickChoice == "n" || rickChoice == "N") {
//         cout << "\tNo payment made. Exiting.\n";
//     } else {
//         cout << "\tInvalid choice!\n";
//     }
// }
 

// void Rickshaw() {
//     int rickshaw = 0;  // Initialize rickshaw variable
//     bool rick_page = false;
//     bool billingCompleted = false;  // Track if billing is completed
//     system("cls");

//     for (rickshaw; rickshaw < 100 && !billingCompleted; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }

//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;

//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;

//             do {
//                 cout << "\tEnter the number of days (not above 10): ";
//                 cin >> rickdays;

//                 if (rickdays > 0 && rickdays <= 10) {
//                     // Provide token or perform relevant actions
//                     int rickbill = rickdays * 50;
//                     cout << "Total bill is: " << rickbill << endl;
//                     cout << "\tCar parked successfully! Token: " << endl;
//                     billingCompleted = true;  // Set the flag to indicate billing is completed
//                 } else {
//                     cout << "\tInvalid number of days. Please enter less than 10 only.\n";
//                     // cin.clear();  // Clear the error flag
//                     // cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
//                 }
//             } while (!billingCompleted);  // Repeat until billing is completed
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }
// void Car()
// {
//     bool carpage = false;
//     bool billcomplete = false;
//     system("cls");
    
//     for(car; car<100 && !billcomplete;car++)
//     {
//         if(carpage == true)
//         {
//             break;
//         }
    
//         string carChoice;
//         cout<<"\tParking Fee: Rs. 70 Per day\n";
//         cout<<"Do you want to pay ( Y/N) : ";
//         cin>>carChoice;
    
//         if( carChoice == "Y" || carChoice == "y")
//         {
//             int cardays;
//             do
//             {
//                 cout<<"\\tEnter the number of days : ";
//                 cin>>cardays;
//                 if(cardays>=0 && cardays<=10)
//                 {
//                     double carbill = cardays*70;
//                     cout<<"\n\tTotal bill is : "<<carbill<<endl;
//                     cout<<"\tCar parked successfully ! Token "<<endl;
//                 }
//                 else
//                 {
//                     cout<<"\tInvalid! number of days\tPlease enter less than 10 Only.\n";
//                 }
//             }while(!billcomplete);
//         }
//         else if(carChoice =="N" || carChoice =="n")
//         {
//             system("cls");
//             carpage = true;
//         }
//         else
//         {
//             cout<<"\tInvalid Choice!"<<endl;
//         }
//     }

// }


// void Bus() {
//     // ... (unchanged)
//     bool bus_page = false;
//     system("cls");
//     for (bus; bus < 100; bus++) {
//         if (bus_page == true) {
//             break;
//         }
//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string busChoice;
//         cin >> busChoice;
//         if (busChoice == "y" || busChoice == "Y") {
//             int busdays;
//             cout << "\tEnter the number of days (not above 10): ";
//             cin >> busdays;
//             if (busdays > 0 && busdays <= 10) {
//                 // Provide token or perform relevant actions
//                 int  busbill = busdays * 100;
//                 cout<<"Totla bill is :"<<busbill<<endl;
//                 cout << "\tCar parked successfully! Token: "<< endl;
//             } else {
//                 cout << "\tInvalid number of days. Parking not allowed.\n";
//             }
//         } else if (busChoice == "n" || busChoice == "N") {
//             system("cls");
//             bus_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }

// void Rickshaw() {
//     // ... (unchanged)
//     bool rick_page = false;
//     system("cls");
//     for (rickshaw; rickshaw < 100; rickshaw++) {
//         if (rick_page == true) {
//             break;
//         }
//         cout << "\tParking Fee: RS.70 per day\n";
//         cout << "\tDo you want to pay (y/n): ";
//         string rickChoice;
//         cin >> rickChoice;
//         if (rickChoice == "y" || rickChoice == "Y") {
//             int rickdays;
//             cout << "\tEnter the number of days (not above 10): ";
//             cin >> rickdays;
//             if (rickdays > 0 && rickdays <= 10) {
//                 // Provide token or perform relevant actions
//                 int  rickbill = rickdays * 50;
//                 cout<<"Totla bill is :"<<rickbill<<endl;
//                 cout << "\tCar parked successfully! Token: "<< endl;
//             } else {
//                 cout << "\tInvalid number of days. Parking not allowed.\n";
//             }
//         } else if (rickChoice == "n" || rickChoice == "N") {
//             system("cls");
//             rick_page = true;
//         } else {
//             cout << "\tInvalid choice!\n";
//         }
//     }
// }


// void receiver() {
//     system("cls");
//     cout << "\t____________________________________________\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t| [1]  Car" << setw(36) << "|\n";
//     cout << "\t| [2]  Bus" << setw(36) << "|\n";
//     cout << "\t| [3]  Rickshaw " << setw(30) << "|\n";
//     cout << "\t| [0]  Main page " << setw(29) << "|\n";
//     cout << "\t| " << setw(44) << "|\n";
//     cout << "\t|___________________________________________|\n\n";
//     cout << "\tEnter your choice: ";
//     string vehicleChoice;
//     cin >> vehicleChoice;
//     if (vehicleChoice == "1") {
//         // Process receiving a car
//         cout << "\tEnter the car token: ";
//         string carToken;
//         cin >> carToken;

//         // Perform actions related to receiving a car based on the token
//         cout << "\tCar received successfully!\n";
//     } else if (vehicleChoice == "2") {
//         // Process receiving a bus
//         cout << "\tEnter the bus token: ";
//         string busToken;
//         cin >> busToken;

//         // Perform actions related to receiving a bus based on the token
//         cout << "\tBus received successfully!\n";
//     } else if (vehicleChoice == "3") {
//         // Process receiving a rickshaw
//         cout << "\tEnter the rickshaw token: ";
//         string rickshawToken;
//         cin >> rickshawToken;

//         // Perform actions related to receiving a rickshaw based on the token
//         cout << "\tRickshaw received successfully!\n";
//     } else {
//         cout << "\tInvalid vehicle choice!\n";
//     }
// }
// void mainpage() {
//     // ... (unchanged)
//     cout << "\t___________________________________________\n";
//     cout << "\t|\t    Car Parking Management\t  |\n";
//     cout << "\t|_________________________________________|\n";
//     cout << "\t| " << setw(42) << "|\n";
//     cout << "\t| [1]  Admin " << setw(31) << "|\n";
//     cout << "\t| [2]  Customer" << setw(29) << "|\n";
//     cout << "\t| [0]  Exit " << setw(32) << "|\n";
//     cout << "\t| " << setw(42) << "|\n";
//     cout << "\t|_________________________________________|\n\n";
//     cout << "\tEnter your choice: ";
// }


// int main() {
//     int startup = 1;
//     string givenpassword = "Saad";

//     while (startup == 1) {
//         mainpage();
//         string choice;
//         cin >> choice;

//         if (choice == "1") {
//             string password;
//             cout << "\tEnter the password: ";
//             cin >> password;

//             if (password == givenpassword) {
//                 system("cls");
//                 cout << "\tWelcome, Admin!\n";
//                 startup++;
//                 adminmenu();
//             } else {
//                 cout << "\n\tIncorrect password!\n";
//             }
//         } else if (choice == "2") {
//             system("cls");
//             customer();
//             string customerChoice;
//             cin >> customerChoice;

//             if (customerChoice == "1") {
//                 // Car functionality
//                 system("cls");
//                 Rickshaw();
//                  // Car();
//                 //Car();
//             } else if (customerChoice == "2") {
//                 // Bus functionality
//                 system("cls");
//                 Bus();
//             } else if (customerChoice == "3") {
//                 // Rickshaw functionality
//                 system("cls");
//                 // Rickshaw();
//             } else {
//                 cout << "\n\tInvalid choice!\n";
//             }
//         } else if (choice == "0") {
//             cout << "\n\tGoodbye!";
//             exit(0);
//         } else {
//             system("cls");
//             cout << "\n\tInvalid choice!\n";
//         }
//     }

//     return 0;
// }

void Rickshaw() 
{
    int rickshaw = 0;  // Initialize rickshaw variable
    bool rick_page = false;
    bool billingCompleted = false;  // Track if billing is completed
    system("cls");

    for (rickshaw; rickshaw < 100 && !billingCompleted; rickshaw++) {
        if (rick_page == true) 
        {
            break;
        }

        cout << "\tParking Fee: RS.70 per day\n";
        cout << "\tDo you want to pay (y/n): ";
        string rickChoice;
        cin >> rickChoice;

        if (rickChoice == "y" || rickChoice == "Y") 
        {
            int rickdays;
            do {
                cout << "\tEnter the number of days (not above 10): ";
                cin >> rickdays;

                if (rickdays > 0 && rickdays <= 10)
                 {
                    // Provide token or perform relevant actions
                    int rickbill = rickdays * 50;
                    cout << "Total bill is: " << rickbill << endl;
                    cout << "\tCar parked successfully! Token: " << endl;
                    billingCompleted = true;  // Set the flag to indicate billing is completed
                } else {
                    cout << "\tInvalid number of days. Please enter less than 10 only.\n";
                    // cin.clear();  // Clear the error flag
                    // cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
                }
            } while (!billingCompleted);  // Repeat until billing is completed
        } 
        else if (rickChoice == "n" || rickChoice == "N")
        {
            system("cls");
            rick_page = true;
        } else {
            cout << "\tInvalid choice!\n";
        }
    }
}


 