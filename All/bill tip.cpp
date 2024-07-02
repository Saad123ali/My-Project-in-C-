 
  
/*  #include <iostream>

using namespace std;

int main() {
  // Get the bill amount from the user.
  float bill_amount;
  cout << "Enter the bill amount: ";
  cin >> bill_amount;

  // Calculate the tip amount.
  float tip_percent = 0.2; // 20% tip
  float total_amount = bill_amount * tip_percent;
  

  // Display the tip amount to the user.
  cout<<"|----------------------------------------------------|"<<endl;
  cout<<"|---------------------BILL AMOUNT--------------------|"<<endl;
  cout<<"|----------------------------------------------------|"<<endl;
  cout<<"|The bill amount : Rs :"<<bill_amount<<"\t\t|"<<endl;
  cout<<"|The tip amount : Rs :"<<tip_percent<<"\t\t|"<<endl;
  cout<<"|The total amount: Rs :"<<total_amount<<"\t\t|"<<endl;
  cout<<"|----------------------------------------------------|"<<endl;

  return 0;
}     */

    /*#include <iostream>

using namespace std;

int main() {
  // Get the bill amount from the user.
  float bill_amount;
  cout << "Enter the bill amount: ";
  cin >> bill_amount;

  // Calculate the tip amount.
  float tip_percent = 0.2; // 20% tip
  float tip_amount = bill_amount * tip_percent;

  // Calculate the total amount of the bill.
  float total_amount = bill_amount + tip_amount;  */
/*  #include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the user's name.
  string name;
  cout << "Enter your name: ";
  cin >> name;

  // Display a personalized greeting to the user.
  cout << "Hello, " << name << "! How can I help you today?" << endl;

  // Get the user's request.
  string request;
  cout << "Enter your request: ";
  cin >> request;

  //request
  if (request == "calculate tip") 
  {
    // Get the bill amount from the user.
    float bill_amount;
    cout << "Enter the bill amount: ";
    cin >> bill_amount;
    // Calculate the tip amount.
    float tip_percent = 0.2; // 20% tip
    float tip_amount = bill_amount * tip_percent;
     // Calculate the total amount of the bill.
  float total_amount = bill_amount + tip_amount;
  }
  // Display the tip amount and total amount to the user.
  cout<<"|----------------------------------------------------|"<<endl;
  cout<<"|---------------------BILL AMOUNT--------------------|"<<endl;
  cout<<"|----------------------------------------------------|"<<endl;
  cout<<"|   The bill amount : Rs :"<<bill_amount<<"\t\t\t     |"<<endl;
  cout<<"|   The tip amount : Rs :"<<tip_amount<<"\t\t\t     |"<<endl;
  cout<<"|   The total amount: Rs :"<<total_amount<<"\t\t\t     |"<<endl;
  cout<<"|----------------------------------------------------|"<<endl;


  return 0;
}     */


#include <iostream>
#include <string>

using namespace std;

int main() {
  // Get the user's name.
  string name;
  cout << "Enter your name: ";
  cin >> name;

  // Display a personalized greeting to the user.
  cout << "Hello, " << name << "! How can I help you today?" << endl;

  // Get the user's request.
  string request;
  cout << "Enter your request: ";
  cin >> request;

  //request
  float bill_amount =0.0, tip_amount=0.0, total_amount=0.0;
  if (request == "calculate tip") {
    // Get the bill amount from the user.
    cout << "Enter the bill amount: ";
    cin >> bill_amount;

    // Calculate the tip amount.
    float tip_percent = 0.2; // 20% tip
    tip_amount = bill_amount * tip_percent;

    // Calculate the total amount of the bill.
    total_amount = bill_amount + tip_amount;
  }

  // Display the tip amount and total amount to the user.
  cout << "|----------------------------------------------------|\n";
  cout << "|---------------------BILL AMOUNT--------------------|\n";
  cout << "|----------------------------------------------------|\n";
  cout << "|  The bill amount : Rs : " << bill_amount << "\t\t\t   |\n";
  cout << "|  The tip amount : Rs : " << tip_amount << "\t\t\t   |\n";
  cout << "|  The total amount: Rs : " << total_amount << "\t\t\t   |\n";
  cout << "|----------------------------------------------------|\n";

  return 0;
}



