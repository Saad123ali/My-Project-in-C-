// // // #include<iostream>
// // // #include<string>
// // // #include<iomanip>
// // // #include<climits>

// // // using namespace std;
// // // int car = 0,
// // //     bus = 0,
// // //     rickshaw = 0,
// // //     startup = 1;
// // // int parkedCars = 0,
// // //     parkedBuses = 0,
// // //     parkedRickshaws = 0;
// // // string givenpassword = "Saad";

// // // void mainpage() 
// // // {
// // //    //system("cls");
// // //     cout << "\t___________________________________________\n";
// // //     cout << "\t|\t    Car Parking Management\t  |\n";
// // //     cout << "\t|_________________________________________|\n";
// // //     cout << "\t| " << setw(42) << "|\n";
// // //     cout << "\t| [1]  Admin " << setw(31) << "|\n";
// // //     cout << "\t| [2]  Customer" << setw(29) << "|\n";
// // //     cout << "\t| [0]  Exit " << setw(32) << "|\n";
// // //     cout << "\t| " << setw(42) << "|\n";
// // //     cout << "\t|_________________________________________|\n\n";
// // //     cout << "\tEnter your choice: ";
// // // }
// // // void showrecord() 
// // // {
// // //   // Add parked vehicle count from each function
// // //   parkedCars = car;
// // //   parkedBuses = bus;
// // //   parkedRickshaws = rickshaw;

// // //   // Display parked vehicle count
// // //   cout << "\t___________________________________________\n";
// // //   cout << "\t|\t  Parked Vehicles"<<setw(20)<<"|\n";
// // //   cout << "\t|__________________________________________|\n\n";
// // //   cout << "\t   Cars      : " << parkedCars<<"\n";
// // //   cout << "\t   Buses     : " << parkedBuses<<"\n";
// // //   cout << "\t   Rickshaws : " << parkedRickshaws <<"\n";
// // //   cout << "\t___________________________________________" << endl;
// // // }
// // // // void deleterecord() 
// // // // {
// // // //     cout << "\t__________________________________________\n";
// // // //     cout << "\t| " << setw(42) << "|\n";
// // // //     cout << "\t| [1]  Specific Record " << setw(21) << "|\n";
// // // //     cout << "\t| [2]  All Record " << setw(26) << "|\n";
// // // //     cout << "\t| [0]  Main Page " << setw(27) << "|\n";
// // // //     cout << "\t| " << setw(42) << "|\n";
// // // //     cout << "\t|_________________________________________|\n\n";
// // // //     string delechoice;
// // // //     cout << "\tEnter your choice: ";
// // // //     cin>>delechoice;
// // // //     if(delechoice == "1")
// // // //     {
// // // //         cout << "\t____________________________________________\n";
// // // //         cout << "\t| " << setw(44) << "|\n";
// // // //         cout << "\t| [1]  Car" << setw(36) << "|\n";
// // // //         cout << "\t| [2]  Bus" << setw(36) << "|\n";
// // // //         cout << "\t| [3]  Rickshaw " << setw(30) << "|\n";
// // // //         cout << "\t| [0]  Main page " << setw(29) << "|\n";
// // // //         cout << "\t| " << setw(44) << "|\n";
// // // //         cout << "\t|___________________________________________|\n\n";
// // // //         cout << "\tSelect vehicle type for deletion : ";
// // // //         string vehicleType;
// // // //         cin >> vehicleType;
// // // //         if(vehicleType == "1")
// // // //         { 
// // // //             cout<<"\tCar Record Deleted\n";
// // // //             parkedCars = 0;    
// // // //         }  
// // // //         else if(vehicleType == "2")
// // // //         {
// // // //             cout<<"\tBus Record Deleted\n";
// // // //             parkedBuses = 0;
// // // //         }
// // // //         else if(vehicleType == "3")
// // // //         {
// // // //             cout<<"\nRickshaw Record Deleted\n";
// // // //             parkedRickshaws = 0;    
// // // //         }
// // // //         else if(vehicleType == "0")
// // // //         {
// // // //             mainpage();
// // // //         }
// // // //         else
// // // //         {
// // // //             cout<<"\tInvalid choice\n";
// // // //         }
// // // //     }
// // // //     else if(delechoice == "2")
// // // //     {
// // // //       cout << "WARNING: This will delete all parked vehicles.\n";
// // // //       cout<<"Are you sure? (Y/N): ";
// // // //       string ans;
// // // //       cin >> ans;
// // // //       if(ans == "y" || ans == "Y")
// // // //       {  
// // // //         cout<<"\n\t___________________________________________\n";
// // // //         cout<<"\t|\tDelete Record Successfully"<<setw(11)<<"|\n";
// // // //         cout<<"\t|__________________________________________|";
// // // //         parkedCars = 0;
// // // //         parkedBuses = 0;
// // // //         parkedRickshaws = 0;
// // // //       }
// // // //     }
// // // //   // Handle selected option
// // // //   switch (choice) {
// // // //     case 1:
// // // //       // Delete by vehicle type
// // // //       cout << "Select vehicle type for deletion: (Car, Bus, Rickshaw): ";
// // // //       string vehicleType;
// // // //       cin >> vehicleType;

// // // //       // Implement logic to delete records based on chosen vehicle type
// // // //       // ... (Similar to previous example)

// // // //       break;
// // // //     case 2:
// // // //       // Delete all records
      
// // // //       if (confirmation == "Y" || confirmation == "y") {
// // // //         // Implement logic to delete all records for all vehicle types
// // // //         // Reset relevant counters (car, bus, rickshaw) to 0
// // // //         cout << "All records deleted successfully." << endl;
// // // //       } else {
// // // //         cout << "Deletion cancelled." << endl;
// // // //       }
// // // //       break;
// // // //     default:
// // // //       cout << "Invalid choice. Please enter 1 or 2." << endl;
// // // //       break;
// // // //   }

// // // //   // Prompt for further action
// // // //   cout << "Return to admin menu? (Y/N): ";
// // // //   string backToMenu;
// // // //   cin >> backToMenu;
// // // //   if (backToMenu == "Y" || backToMenu == "y") {
// // // //     // ... (Go back to admin menu)
// // // //   } else {
// // // //     cout << "Exiting delete record function." << endl;
// // // //   }
// // // // }
// // // void adminmenu()
// // // {
// // //     system("cls");
// // //     cout << "\n\t___________________________________________\n";
// // //     cout << "\t|\t\t  Admin menu\t\t  |\n";
// // //     cout << "\t|_________________________________________|\n";
// // //     cout << "\t| " << setw(42) << "|\n";
// // //     cout << "\t| [1]  Show Record " << setw(25) << "|\n";
// // //     cout << "\t| [2]  Delete Record" << setw(24) << "|\n";
// // //     cout << "\t| [0]  Exit " << setw(32) << "|\n";
// // //     cout << "\t| " << setw(42) << "|\n";
// // //     cout << "\t|_________________________________________|\n\n";
// // //     cout << "\tEnter your choice: "; 
// // //     string adminchoice;
// // //     cin>>adminchoice;
// // //     if(adminchoice == "1")
// // //     {
// // //         system("cls");
// // //         showrecord();
// // //     }
// // //     else if(adminchoice == "0")
// // //     {
// // //         system("cls");
// // //         mainpage();
// // //     }
// // // }
// // // void customer() 
// // // {
// // //     system("cls");
// // //     cout << "\t____________________________________________\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t| [1]  Parking" << setw(32) << "|\n";
// // //     cout << "\t| [2]  Receiver" << setw(31) << "|\n";
// // //     cout << "\t| [0]  Main page " << setw(29) << "|\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t|___________________________________________|\n\n";
// // //     cout << "\tEnter your choice: ";
// // // }
// // // void Car()
// // // {
// // //     bool carpage = false;
// // //     bool billcomplete = false;
// // //     system("cls");
    
// // //     for(car; car<100 && !billcomplete;car++)
// // //     {
// // //        if(carpage == true)
// // //         {
// // //             break;
// // //         } 
// // //         cout<<"\tParking Fee: Rs. 70 Per day\n";
// // //         cout<<"Do you want to pay ( Y/N) : ";
// // //         string carChoice;
// // //         cin>>carChoice;
    
// // //         if( carChoice == "Y" || carChoice == "y")
// // //         {
// // //             int cardays;
// // //             do
// // //             {
// // //                 cout<<"\tEnter the number of days : ";
// // //                 cin>>cardays;
// // //                 if(cin.fail())
// // //                 {
// // //                     cin.clear();
// // //                     cin.ignore(INT_MAX,'\n');
// // //                     cout<<"\tInvalid input! Please enter a number.\n";
// // //                     continue;
// // //                 }
// // //                 if(cardays>0 && cardays<=10)
// // //                 {
// // //                     double carbill = cardays*70;
// // //                     cout<<"\n\tTotal bill is : "<<carbill<<endl;
// // //                     cout<<"\tCar parked successfully ! Token "<<endl;
// // //                     billcomplete =true;
// // //                 }
// // //                 else
// // //                 {
// // //                     cout<<"\tInvalid! number of days\tPlease enter less than 10 Only.\n";
// // //                 }
// // //             }while(!billcomplete);
// // //         }
// // //         else if(carChoice =="N" || carChoice =="n")
// // //         {
// // //             system("cls");
// // //             carpage = true;
// // //         }
// // //         else
// // //         {
// // //             cout<<"\tInvalid Choice!"<<endl;
// // //         }
// // //     }

// // // }
// // // void Bus()
// // // {
// // //     bool buspage = false;
// // //     bool billcomplete = false;
// // //     system("cls");
    
// // //     for(bus; bus<100 && !billcomplete;bus++)
// // //     {
// // //         if(buspage == true)
// // //         {
// // //             break;
// // //         }
    
// // //         string busChoice;
// // //         cout<<"\tParking Fee: Rs. 100 Per day\n";
// // //         cout<<"Do you want to pay ( Y/N) : ";
// // //         cin>>busChoice;
    
// // //         if( busChoice == "Y" || busChoice == "y")
// // //         {
// // //             int busdays;
// // //             do
// // //             {
// // //                 cout<<"\tEnter the number of days : ";
// // //                 cin>>busdays;
// // //                 if(cin.fail())
// // //                 {
// // //                     cin.clear();
// // //                     cin.ignore(INT_MAX,'\n');
// // //                     cout<<"\tInvalid input! Please enter a number.\n";
// // //                     continue;
// // //                 }
// // //                 if(busdays>=0 && busdays<=10)
// // //                 {
// // //                     double busbill = busdays*100;
// // //                     cout<<"\n\tTotal bill is : "<<busbill<<endl;
// // //                     cout<<"\tBus parked successfully ! Token "<<endl;
// // //                     billcomplete = true;
// // //                 }
// // //                 else
// // //                 {
// // //                     cout<<"\tInvalid! number of days\tPlease enter less than 10 Only.\n";
// // //                 }
// // //             }while(!billcomplete);
// // //         }
// // //         else if(busChoice =="N" || busChoice =="n")
// // //         {
// // //             system("cls");
// // //             buspage = true;
// // //         }
// // //         else
// // //         {
// // //             cout<<"\tInvalid Choice!"<<endl;
// // //         }
// // //     }

// // // }
// // // void Rickshaw()
// // // {
// // //     bool rickpage = false;
// // //     bool billcomplete = false;
// // //     system("cls");
    
// // //     for(rickshaw; rickshaw<100 && !billcomplete;rickshaw++)
// // //     {
// // //         if(rickpage == true)
// // //         {
// // //             break;
// // //         }
    
// // //         string rickChoice;
// // //         cout<<"\tParking Fee: Rs. 50 Per day\n";
// // //         cout<<"Do you want to pay ( Y/N) : ";
// // //         cin>>rickChoice;
    
// // //         if( rickChoice == "Y" || rickChoice == "y")
// // //         {
// // //             int rickdays;
// // //             do
// // //             {
// // //                 cout<<"\tEnter the number of days : ";
// // //                 cin>>rickdays;
// // //                 if(cin.fail())
// // //                 {
// // //                     cin.clear();
// // //                     cin.ignore(INT_MAX,'\n');
// // //                     cout<<"\tInvalid input! Please enter a number.\n";
// // //                     continue;
// // //                 }    
// // //                 if(rickdays>=0 && rickdays<=10)
// // //                 {
// // //                     double rickbill = rickdays*50;
// // //                     cout<<"\n\tTotal bill is : "<<rickbill<<endl;
// // //                     cout<<"\tRickshaw parked successfully ! Token "<<endl;
// // //                     billcomplete = true;
// // //                 }
// // //                 else
// // //                 {
// // //                     cout<<"\tInvalid! number of days\tPlease enter less than 10 Only.\n";
// // //                 }
// // //             }while(!billcomplete);
// // //         }
// // //         else if(rickChoice =="N" || rickChoice =="n")
// // //         {
// // //             system("cls");
// // //             rickpage = true;
// // //         }
// // //         else
// // //         {
// // //             cout<<"\tInvalid Choice!"<<endl;
// // //         }
// // //     }

// // // }
// // // void Parking() 
// // // {
// // //     system("cls");
// // //     cout << "\t____________________________________________\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t| [1]  Car" << setw(36) << "|\n";
// // //     cout << "\t| [2]  Bus" << setw(36) << "|\n";
// // //     cout << "\t| [3]  Rickshaw " << setw(30) << "|\n";
// // //     cout << "\t| [0]  Main page " << setw(29) << "|\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t|___________________________________________|\n\n";
// // //     string parkchoice;
// // //     cout << "\tEnter your choice: ";
// // //     cin>>parkchoice;
// // //     if(parkchoice == "1")
// // //     {
// // //         system("cls");
// // //         Car();
// // //     }
// // //     else if(parkchoice == "2")
// // //     {
// // //         system("cls");
// // //         Bus();
// // //     }
// // //     else if(parkchoice == "3")
// // //     {
// // //         system("cls");
// // //         Rickshaw();
// // //     }
// // //     else if(parkchoice == "0")
// // //     {
// // //         system("cls");
// // //         mainpage();
// // //     }
// // //     else
// // //     {
// // //         cout<<"\tInvalid Choice!"<<endl;
// // //     }

// // // }
// // // void receiver() 
// // // {
// // //     system("cls");
// // //     cout << "\t____________________________________________\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t| [1]  Car" << setw(36) << "|\n";
// // //     cout << "\t| [2]  Bus" << setw(36) << "|\n";
// // //     cout << "\t| [3]  Rickshaw " << setw(30) << "|\n";
// // //     cout << "\t| [0]  Main page " << setw(29) << "|\n";
// // //     cout << "\t| " << setw(44) << "|\n";
// // //     cout << "\t|___________________________________________|\n\n";
// // //     string recechoice;
// // //     cout << "\tEnter your choice: ";
// // //     cin>>recechoice;
// // //     if(recechoice == "1")
// // //     { 
// // //         string cartoken;
// // //         cout<<"\tEnter the Car token : ";
// // //         cin>>cartoken;
// // //         cout<<"\tCar received successfully!\n";
// // //     }
// // //     else if(recechoice == "2")
// // //     {
// // //         string bustoken;
// // //         cout<<"\tEnter the Bus token : ";
// // //         cin>>bustoken;
// // //         cout<<"\tBus received successfully!\n";
// // //     }
// // //     else if(recechoice == "3")
// // //     {
// // //         string ricktoken;
// // //         cout<<"\tEnter the RIckshaw token : ";
// // //         cin>>ricktoken;
// // //         cout<<"\tRickshaw received successfully!\n";
// // //     }
// // //     else if(recechoice == "0")
// // //     {
// // //         system("cls");
// // //         mainpage();
// // //     }
// // //     else
// // //     {
// // //         cout<<"Invlaid choice!"<<endl;
// // //     }

// // // }
// // // int main()
// // // {
 

// // //     while(startup == 1)
// // //     {
// // //         mainpage();
// // //         string choice;
// // //         cin>>choice;
// // //         if(choice == "1")
// // //         {
// // //             string password;
// // //             cout<<"\tEnter the Password : ";
// // //             cin>>password;
// // //             if(password == givenpassword)
// // //             {
// // //                 system("cls");
// // //                 cout<<"\tWelcome Admin!\n";
// // //                 startup++;
// // //                 system("CLS");
// // //                 adminmenu();
// // //             }
// // //             else
// // //             {
// // //                 cout<<"\n\tIncorrect Password!\n";
// // //             }
            
// // //         }
// // //         else if(choice == "2")
// // //         {
// // //             system("cls");
// // //             customer();
// // //             string customerchoice;
// // //             cin>>customerchoice;
// // //             if(customerchoice == "1")
// // //             {
// // //                 system("cls");
// // //                 Parking();
// // //             }
// // //             else if(customerchoice == "2")
// // //             {
// // //                 system("cls");
// // //                 receiver();
// // //             }
// // //             else if(customerchoice == "0")
// // //             {
// // //                 system("cls");
// // //                 mainpage();
// // //             }
// // //             else
// // //             {
// // //                 cout<<"\tInvalid Choice!\n"<<endl;
// // //             }
// // //         }
// // //         else if(choice == "0")
// // //         {
// // //             cout<<"\n\tGood Bye!"<<endl;
// // //             exit(0);
// // //         }
// // //         else
// // //         {
// // //             system("cls");
// // //             cout<<"\n\tInvalid Choice!\n"<<endl;
// // //         }
// // //     }
// // //     return 0;
// // // }




 













  cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t| [1]  |     PARKING"<<setw(25)<<"|\n";
    cout<<"\t\t| [2]  |     RECEIVER"<<setw(24)<<"|\n";
    cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t|______|___________________________________|\n";
    cout<<"\n\t\tEnter your choice ... ";
    cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t| [1]  |     CAR"<<setw(29)<<"|\n";
    cout<<"\t\t| [2]  |     BUS"<<setw(29)<<"|\n";
    cout<<"\t\t| [2]  |     RICKSHAW"<<setw(24)<<"|\n";
    cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t|______|___________________________________|\n";
    cout<<"\n\t\tEnter your choice ... ";
    cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t| [1]  |     SHOW RECORD"<<setw(21)<<"|\n";
    cout<<"\t\t| [2]  |     DELETE RECORD"<<setw(19)<<"|\n";
    cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t|______|___________________________________|\n";
    cout<<"\n\t\tEnter your choice ... ";
    cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t| [1]  |     SPECIFIC RECORD"<<setw(17)<<"|\n";
    cout<<"\t\t| [2]  |     ALL RECORD"<<setw(22)<<"|\n";
    cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t|______|___________________________________|\n";
    cout<<"\n\t\tEnter your choice ... ";
    cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      " << setw(37) << "\n";
    cout<<"\t\t|     CAR : "<<setw(27)<<"\n";
    cout<<"\t\t|     BUS : "<<setw(24)<<"\n";
    cout<<"\t\t|     RICKSHAW : "<<setw(28)<<"\n";
    cout<<"\t\t|      " << setw(37) << "\n";
    cout<<"\t\t|__________________________________________\n";
}


// // #include<iostream>
// // #include<iomanip>
// // #include<climits>
// // #include<cstring>
// // #include<windows.h>

// // using namespace std;
// // int veh = 0;
// // int pla = 0;
// // string adminname = "Saad Ali";
// // string givenpassword = "1234";
// // bool startup = true;

// // struct vehicle
// // {
// //     string cdays,
// //         bdays,
// //         rdays;
// // };

// // struct vehicle vehicles[100];

// // struct platenum
// // {
// //     char car[20];
// //     char bus[20];
// //     char rickshaw[20];
// // };

// // struct platenum numbers[100];

// // void title()
// // {
// //     while (true)
// //     {
// //         cout << "\n\t\t******* WELCOME TO CAR PARKING MANAGEMENT *******\n";
// //         startup = !(startup);
// //         break;
// //     }
// // }

// // void car()
// // {
// //     for (veh = 0; veh < 100; veh++)
// //     {
// //         cout << "\tParking Fee: RS.70 per day\n";
// //         cout << "\tDo you want to pay (y/n): ";
// //         string carchoice;
// //         cin >> carchoice;
// //         if (carchoice == "y" || carchoice == "Y")
// //         {
// //             cout << "\n\tEnter the Plate number of Car: ";
// //             cin.ignore();
// //             cin.getline(numbers[pla].car, 20);

// //             while (true)
// //             {
// //                 cout << "\n\tEnter the number of days (1 to 10): ";
// //                 cin >> vehicles[veh].cdays;

// //                 if (vehicles[veh].cdays == "1" || vehicles[veh].cdays == "2" || vehicles[veh].cdays == "3" || vehicles[veh].cdays == "4" || vehicles[veh].cdays == "5" ||
// //                    vehicles[veh].cdays == "6" || vehicles[veh].cdays == "7" || vehicles[veh].cdays == "8" || vehicles[veh].cdays == "9" || vehicles[veh].cdays == "10")
// //                 {
// //                     double bill = stoi(vehicles[veh].cdays) * 70;
// //                     cout << "\n\t Total Bill: Rs." << bill << "\n";
// //                     cout << "\t Plate number: " << numbers[pla].car << "\n";
// //                     cout << "\t Car Park Successfully" << "\n";
// //                     break;
// //                 }
// //                 else
// //                 {
// //                     cout << "\n\tInvalid input. Please enter a number between 1 and 10.\n";
// //                 }
// //             }
// //         }
// //         else if (carchoice == "n" || carchoice == "N")
// //         {
// //             break;
// //         }
// //         else
// //         {
// //             cout << "\tInvalid input \t\nPlease enter y or n";
// //         }
// //     }
// // }

// // // Other functions remain unchanged...

// // int main()
// // {
// //     while (startup)
// //     {
// //         title();
// //     }

// //     while (true)
// //     {
// //         cout << "\n\t\t __________________________________________\n";
// //         cout << "\t\t|      |" << setw(37) << "|\n";
// //         cout << "\t\t| [1]  |     ADMIN" << setw(27) << "|\n";
// //         cout << "\t\t| [2]  |     CUSTOMER" << setw(24) << "|\n";
// //         cout << "\t\t| [0]  |     EXIT" << setw(28) << "|\n";
// //         cout << "\t\t|      |" << setw(37) << "|\n";
// //         cout << "\t\t|______|___________________________________|\n";
// //         cout << "\n\t\tEnter your choice ... ";

// //         string choice;
// //         cin >> choice;

// //         if (choice == "1")
// //         {
// //             // Admin login code...
// //             // Call admin function...
// //         }
// //         else if (choice == "2")
// //         {
// //             car(); // Call the car function...
// //         }
// //         else if (choice == "0")
// //         {
// //             cout << "\n\tThanks for using \n\tGoodbye...\n";
// //             break;
// //         }
// //         else
// //         {
// //             cout << "\t\tInvalid input \t\nPlease enter 1,2, or 0";
// //         }
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <iomanip>
// #include <string>

// using namespace std;

// // Global variables
// int veh = 0;
// int pla = 0;
// string adminname = "Saad Ali";
// string givenpassword = "1234";

// // Structs for vehicle data
// struct vehicle {
//     string cdays, bdays, rdays;
// };

// struct platenum {
//     char car[20];
//     char bus[20];
//     char rickshaw[20];
// };

// vehicle vehicles[100];
// platenum numbers[100];

// // Function to display car records
// void showCarRecords() {
//     if (veh == 0) {
//         cout << "\n\n\n\tNo car record found.\n\n";
//     } else {
//         for (int i = 0; i < veh; i++) {
//             cout << "\n\n Car no: " << i + 1 << "\n";
//             cout << "\n\tNO of days: " << vehicles[i].cdays;
//             cout << "\n\tCar plate number: " << numbers[i].car;
//             cout << "\n";
//         }
//     }
// }

// // Function to handle car parking
// void car() {
//     cout << "\tParking Fee: RS.70 per day\n";
//     cout << "\tDo you want to pay (y/n): ";
//     string carchoice;
//     cin >> carchoice;

//     if (carchoice == "y" || carchoice == "Y") {
//         cout << "\n\tEnter the Plate number of Car: ";
//         cin.ignore();
//         cin.getline(numbers[pla].car, 20);

//         bool bill = false;
//         while (!bill) {
//             cout << "\n\tEnter the number of days: ";
//             cin >> vehicles[veh].cdays;
//             if (vehicles[veh].cdays == "1" || vehicles[veh].cdays == "2" || vehicles[veh].cdays == "3" || vehicles[veh].cdays == "4" || vehicles[veh].cdays == "5" ||
//                 vehicles[veh].cdays == "6" || vehicles[veh].cdays == "7" || vehicles[veh].cdays == "8" || vehicles[veh].cdays == "9" || vehicles[veh].cdays == "10") {
//                 double billAmount = stoi(vehicles[veh].cdays) * 70;
//                 cout << "\n\tTotal Bill: Rs." << billAmount << "\n";
//                 cout << "\tPlate number: " << numbers[pla].car << "\n";
//                 cout << "\tCar Parked Successfully" << "\n";
//                 bill = true;
//                 veh++;  // Increment veh for the next car
//                 pla++;  // Increment pla for the next plate number
//             } else {
//                 cout << "\n\tInvalid input\n\tPlease enter the number of days between 1 and 10\n";
//             }
//         }
//     } else if (carchoice == "n" || carchoice == "N") {
//         // User doesn't want to pay, return to the main menu
//     } else {
//         cout << "\n\tInvalid input\n\tPlease enter y or n\n\n";
//     }
// }

// // ... (rest of the code for other functions and main)

// int main() {
//     while (true) {
//         cout << "\n\t\t******* WELCOME TO CAR PARKING MANAGEMENT *******\n";
//         cout << "\n\t\t __________________________________________\n";
//         cout << "\t\t|      |" << setw(37) << "|\n";
//         cout << "\t\t| [1]  |     ADMIN" << setw(27) << "|\n";
//         cout << "\t\t| [2]  |     CUSTOMER" << setw(24) << "|\n";
//         cout << "\t\t| [0]  |     EXIT" << setw(28) << "|\n";
//         cout << "\t\t|      |" << setw(37) << "|\n";
//         cout << "\t\t|______|___________________________________|\n";
//         cout << "\n\t\tEnter your choice ... ";
//         string choice;
//         cin >> choice;

//         if (choice == "1") {
//             string password, Admin;
//             cout << "\n\tEnter the Admin name: ";
//             cin.ignore();
//             getline(cin, Admin);
//             cout << "\n\tEnter the password: ";
//             cin >> password;
//             if (password == givenpassword && Admin == adminname) {
//                 system("cls");
//                 showCarRecords();
//             } else {
//                 cout << "\n\tInvalid username or password \n";
//             }
//         } else if (choice == "2") {
//             system("cls");
//             car();
//         } else if (choice == "0") {
//             cout << "\n\tThanks for using \n\tGood bye...\n";
//             break;
//         }
//     }

//     return 0;
// }

#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>

using namespace std;
int veh = 0;
int pla = 0;
string adminname = "Saad Ali";
string givenpassword = "1234";
bool startup = true;
void title()
{
    while(true)
    {
        cout<<"\n\t\t******* WELCOME TO CAR PARKING MANAGEMENT *******\n";
        startup = !(startup);
        break;
    }
}
struct vehicle
{
    string cdays,
        bdays,
        rdays;    
};
struct vehicle vehicles[100];
struct platenum
{
    char car[20];
    char bus[20];
    char rickshaw[20];
};
struct platenum numbers[100];
void meun()
{
    cout<<"\n\t\t __________________________________________\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t| [1]  |     ADMIN"<<setw(27)<<"|\n";
    cout<<"\t\t| [2]  |     CUSTOMER"<<setw(24)<<"|\n";
    cout<<"\t\t| [0]  |     EXIT"<<setw(28)<<"|\n";
    cout<<"\t\t|      |" << setw(37) << "|\n";
    cout<<"\t\t|______|___________________________________|\n";
    cout<<"\n\t\tEnter your choice ... ";
}        
void showrecord()
{
    bool back = false;
    while (back == false)
    {
        cout<<"\n\t\t __________________________________________\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t| [1]  |     CAR"<<setw(29)<<"|\n";
        cout<<"\t\t| [2]  |     BUS"<<setw(29)<<"|\n";
        cout<<"\t\t| [3]  |     RICKSHAW"<<setw(24)<<"|\n";
        cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t|______|___________________________________|\n";
        cout<<"\n\t\tSelect vehicle do you want see ... ";
        string shochoice;
        cin>>shochoice;
        if (shochoice == "1")
        {
            if( veh == 0)
            {
                cout << "\n\n\n\tNo car record found.\n\n";
            }
            else
            {
                for (int i = 0; i < veh ; i++)
                {
                    cout << "\n\n Car no: " << i+1 <<"\n";
                    cout << "\n\tNO of days: "<<vehicles[i].cdays;
                    cout << "\n\tCar plate number: "<<numbers[i].car;
                    cout << "\n";
                }
            }
        }
        else if (shochoice == "2")
        {
            if( veh == 0 )
            {
                cout << "\n\n\n\tNo bus record found.\n\n";
            }
            else
            {
                for (int i = 0; i < veh; i++)
                {
                    cout << "\n\n Bus no: " << i+1 <<"\n";
                    cout << "\n\tNo of days: "<<vehicles[i].bdays;
                    cout << "\n\tBus plate number: "<<numbers[i].bus;
                    cout << "\n";
                }
            }
        }
        else if (shochoice == "3")
        {
            if( veh == 0 )
            {
                cout << "\n\n\n\tNo rickshaw record found.\n\n";
            }
            else
            {
                for (int i = 0; i < veh; i++)
                {
                    cout << "\n\n Rickshaw no: " << i+1 <<"\n";
                    cout << "\n\tNo of days: "<<vehicles[i].rdays;
                    cout << "\n\tRickshaw plate number: "<<numbers[i].rickshaw;
                    cout << "\n";
                }
            }
        }
        else if (shochoice == "0")
        {
            back = true;
            break;
        }
        else 
        {
            cout<<"\t\tInvalid input \t\nPlease enter 1,2, or 3";
        }
    }
}
void admin()
{
    bool back = false;
    while (back == false)
    {
        cout<<"\n\t\t __________________________________________\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t| [1]  |     SHOW RECORD"<<setw(21)<<"|\n";
        cout<<"\t\t| [2]  |     DELETE RECORD"<<setw(19)<<"|\n";
        cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t|______|___________________________________|\n";
        cout<<"\n\t\tEnter your choice ... ";
        string admchoice;
        cin>>admchoice;
        if (admchoice == "1")
        {
            system("cls");
            showrecord();
        }
        else if (admchoice == "2")
        {
            system("cls");
            // deleterecord();
        }
        else if (admchoice == "0")
        {
            back = true;
            break;
        }
        else
        {
            cout<<"\t\tInvalid input \t\nPlease enter 1,2, or 0"; 
        }

    }
}
 
void car()
{
     
    cout << "\tParking Fee: RS.70 per day\n";
    cout << "\tDo you want to pay (y/n): ";
    string carchoice;
    cin >> carchoice;

    if (carchoice == "y" || carchoice == "Y")
    {
        cout << "\n\tEnter the Plate number of Car: ";
        cin.ignore();
        cin.getline(numbers[pla].car, 20);

        bool bill = false;
        while (!bill)
        {
            cout << "\n\tEnter the number of days: ";
            cin >> vehicles[veh].cdays;
            if (vehicles[veh].cdays == "1" || vehicles[veh].cdays == "2" || vehicles[veh].cdays == "3" || vehicles[veh].cdays == "4" || vehicles[veh].cdays == "5" ||
            vehicles[veh].cdays == "6" || vehicles[veh].cdays == "7" || vehicles[veh].cdays == "8" || vehicles[veh].cdays == "9" || vehicles[veh].cdays == "10")
            {
                double billAmount = stoi(vehicles[veh].cdays) * 70;
                cout << "\n\tTotal Bill: Rs." << billAmount << "\n";
                cout << "\tPlate number: " << numbers[pla].car << "\n";
                cout << "\tCar Park Successfully" << "\n";
                bill = true;
                veh++;
                pla++;
            }
            else
            {
                cout << "\n\tInvalid input\n\tPlease enter the number of days between 1 and 10\n";
            }
        }
            // break; // Exit the loop after processing one car
    }
    else if (carchoice == "n" || carchoice == "N")
    {
            // break; // Exit the loop if the user doesn't want to pay
    }
    else
    {
        system("cls");
        cout << "\n\tInvalid input\n\tPlease enter y or n\n\n";
    }
    
}


 void bus()
{
     
    cout << "\tParking Fee: RS.100 per day\n";
    cout << "\tDo you want to pay (y/n): ";
    string buschoice;
    cin >> buschoice;

    if (buschoice == "y" || buschoice == "Y")
    {
        cout << "\n\tEnter the Plate number of Bus: ";
        cin.ignore();
        cin.getline(numbers[pla].bus, 20);

        bool bill = false;
        while (!bill)
        {
            cout << "\n\tEnter the number of days: ";
            cin >> vehicles[veh].bdays;
            if (vehicles[veh].bdays == "1" || vehicles[veh].bdays == "2" || vehicles[veh].bdays == "3" || vehicles[veh].bdays == "4" || vehicles[veh].bdays == "5" ||
                vehicles[veh].bdays == "6" || vehicles[veh].bdays == "7" || vehicles[veh].bdays == "8" || vehicles[veh].bdays == "9" || vehicles[veh].bdays == "10")
            {
                double billAmount = stoi(vehicles[veh].bdays) * 100;
                cout << "\n\tTotal Bill: Rs." << billAmount << "\n";
                cout << "\tPlate number: " << numbers[pla].bus << "\n";
                cout << "\tCar Park Successfully" << "\n";
                bill = true;
                veh++;
                pla++;
            }
            else
            {
                cout << "\n\tInvalid input\n\tPlease enter the number of days between 1 and 10\n";
            }
        }
            // break; // Exit the loop after processing one car
    }
    else if (buschoice == "n" || buschoice == "N")
    {
        // break; // Exit the loop if the user doesn't want to pay
    }
    else
    {
        system("cls");
        cout << "\n\tInvalid input\n\tPlease enter y or n\n\n";
    }
    
}

void rickshaw()
{

    cout << "\tParking Fee: RS.50 per day\n";
    cout << "\tDo you want to pay (y/n): ";
    string rickchoice;
    cin >> rickchoice;

    if (rickchoice == "y" || rickchoice == "Y")
    {
        cout << "\n\tEnter the Plate number of Rickshaw: ";
        cin.ignore();
        cin.getline(numbers[pla].rickshaw, 20);

        bool bill = false;
        while (!bill)
        {
            cout << "\n\tEnter the number of days: ";
            cin >> vehicles[veh].rdays;
            if (vehicles[veh].rdays == "1" || vehicles[veh].rdays == "2" || vehicles[veh].rdays == "3" || vehicles[veh].rdays == "4" || vehicles[veh].rdays == "5" ||
                vehicles[veh].rdays == "6" || vehicles[veh].rdays == "7" || vehicles[veh].rdays == "8" || vehicles[veh].rdays == "9" || vehicles[veh].rdays == "10")
            {
                double billAmount = stoi(vehicles[veh].rdays) * 70;
                cout << "\n\tTotal Bill: Rs." << billAmount << "\n";
                cout << "\tPlate number: " << numbers[pla].rickshaw << "\n";
                cout << "\tCar Park Successfully" << "\n";
                bill = true;
                veh++;
                pla++;
            }
            else
            {
                cout << "\n\tInvalid input\n\tPlease enter the number of days between 1 and 10\n";
            }
        }
            // break; // Exit the loop after processing one car
    }
    else if (rickchoice == "n" || rickchoice == "N")
    {
        // break; // Exit the loop if the user doesn't want to pay
    }
    else
    {
        system("cls");
        cout << "\n\tInvalid input\n\tPlease enter y or n\n\n";
    }
    
}

void Parking()
{
    bool back = false;
    while (back == false)
    {
        cout<<"\n\t\t __________________________________________\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t| [1]  |     CAR"<<setw(29)<<"|\n";
        cout<<"\t\t| [2]  |     BUS"<<setw(29)<<"|\n";
        cout<<"\t\t| [3]  |     RICKSHAW"<<setw(24)<<"|\n";
        cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t|______|___________________________________|\n";
        cout<<"\n\t\tEnter your choice ... ";
        string parkchoice;
        cin>>parkchoice;
        
        if (parkchoice == "1")
        {
            system("cls");
            car();
        }
        else if (parkchoice == "2")
        {
            system("cls");
            bus();
        }
        else if (parkchoice == "3")
        {
            system("cls");
            rickshaw();
        }
        else if (parkchoice == "0")
        {
            back = true;
            break;
        }
        else
        {
            cout<<"\t\tInvalid input \t\nPlease enter 1,2,3 or 0";
        }
    }
    
    
}
void customer()
{
    bool back = false;
    while (back == false)
    {
        cout<<"\n\t\t __________________________________________\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t| [1]  |     PARKING"<<setw(25)<<"|\n";
        cout<<"\t\t| [2]  |     RECEIVER"<<setw(24)<<"|\n";
        cout<<"\t\t| [0]  |     MAIN PAGE"<<setw(23)<<"|\n";
        cout<<"\t\t|      |" << setw(37) << "|\n";
        cout<<"\t\t|______|___________________________________|\n";
        cout<<"\n\t\tEnter your choice ... ";
        string custchoice;
        cin>>custchoice;
        if (custchoice == "1")
        {
            system("cls");
            Parking();
        }
        else if (custchoice == "2")
        {
            // system("cls");
            // receiver();
        }
        else if (custchoice == "0")
        {
            back = true;
            break;
        }
        else
        {
           cout<<"\t\tInvalid input \t\nPlease enter 1,2, or 0"; 
        }
    }
    
} 

int main()
{
    while(startup)
    {
        title();
    }
    while(true)
    {
        meun();
        string choice;
        cin>>choice;
        if(choice == "1")
        {
            while(true)
            {
                string password,Admin;
                cout<<"\n\tEnter the Admin name: ";
                cin.ignore();
                getline(cin, Admin);
                cout<<"\n\tEnter the password: ";
                cin>>password;
                if(password == givenpassword && Admin == adminname)
                {
                    system("cls");
                    admin();
                    break;
                }
                else 
                {
                    cout<<"\n\tInvalid username or password \n";
                }
            }
        }
        else if(choice == "2")
        {
            system("cls");
            customer();
        }else if(choice == "0")
        {
            cout<<"\n\tThanks for using \n\tGood bye...\n";
            break;
        }
    }
    
    
    return 0;
}