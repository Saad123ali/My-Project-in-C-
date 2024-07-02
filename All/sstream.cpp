// #include<iostream>
// #include<sstream>
// using namespace std;

// int main()
// {
//   cout << "\n\n------------------------------------"; 
//   cout << "\n|\tCar Parking Management\t\t|\n";
//   cout << "------------------------------------"; 
//   int days, Vehicle_type;
//   //menu 
  
//   cout << "\n\nWelcome to Car Parking Management\n" << endl;
//   start:
//   cout << "\n: Please Select the Vehicle type :\n";
//   cout << "\n1 : Rickshaw\n";
//   cout << "\n2 : Car\n";
//   cout << "\n3 : Bus\n";
//   cout<<endl;
//   cout<<"==> : ";
//   //cin >> Vehicle_type;
//   string input;
//      // Get the user input as a string
//   getline(cin, input); 
//      // Create a stringstream from the input string
//   stringstream ss(input);
//     // Check if the input is a valid integer and there is no extra input
//   if (!(ss >> Vehicle_type) || !ss.eof()) 
//   { 
//     cout << "\tInvalid Vehicle Type !\n\a";  
//     goto start;
//   }
  
//   double Rickshaw_fee,Car_fee,Bus_fee;
//   //parking fee
//   switch(Vehicle_type)
//   {
//    //Rickshaw
//    case 1:
//        cout << "Enter the Parking fee for Rickshaw : ";
//        cin >> Rickshaw_fee;
//        break;
//    //Car
//    case 2:
//        cout << "Enter the Parking fee for Car : "; 
//        cin >> Car_fee;
//        break;
//    //Bus
//    case 3:
//        cout << "Enter the Parking fee for Bus : "; 
//        cin >> Bus_fee; 
//        break;
//    //error handling 
//    default :
//        cout << "\tInvalid Vehicle Type !\n\a";  
//        goto start;
//        break;      
//   }
//   //days
//   cout << "Enter the number of days of parking : ";
//   cin >> days;
//   //calculate parking fee
//   double Parking_fee=0;
//   switch(Vehicle_type)
//   {
//    //Rickshaw fee calculate
//    case 1:
//    Parking_fee=Rickshaw_fee*days;
//    break;
//    //Car fee calculate
//    case 2:
//    Parking_fee=Car_fee*days;
//    break;
//    case 3:
//    Parking_fee=Bus_fee*days;
//    break;
//   }
//   // Display the Bill
//    cout << "\n\n------------------------------------";
//    cout << "\n|\tParking-Bill\t\t\t|\n";
//    cout << "------------------------------------"; 
//    cout << "| Vehicle type : "<<(Vehicle_type==1 ? "Rickshaw" : (Vehicle_type==2 ? "Car" : "Bus"))<<"\t\t|\n";
//    cout << "| Number of days : "<<days<<"\t\t\t|\n";
//    cout << "| Parking fee : " << Parking_fee<<"\t\t\t|\n";
//    cout << "|__________________________________|"; 
   
//     return 0;
// }
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int carbill =0;
  cout<<"\t________________________________________\n";
  cout<<"\t|"<<setw(34)<<"|\n";
  cout<<"\t|Total bill is : "<<carbill<<"|"<<endl;
  cout<<"\tCar parked successfully ! Token"<<"|"<<endl;
  cout<<"\t________________________________________|\n";
    return 0;
}