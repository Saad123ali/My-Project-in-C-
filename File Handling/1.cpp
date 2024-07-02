#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include <ctime>

using namespace std;

void mainMenu();
void mainMenu2();
void firstPage();
void displayMenu();
void foodOptions();

class Management
{
public:
    Management()
    {
        firstPage();
    }
};

void firstPage()
{
    cout << "\n___________________________________________________________________________________" << endl;
    cout << "____________________________WELCOME TO XYZ RAILWAYS______________________________\n" << endl;
    cout << "\t\t|\t 1. Admin Mode    \t|" << endl;
    cout << "\t\t|\t 2. User Mode     \t|" << endl;
    cout << "\t\t|\t 3. Exit          \t|" << endl;
    int choice;
    string id = "admin";
    string password = "123";
    string eid, pass;

    cout << "Select: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "____________________________________________________________" << endl;
        cout << endl
             << "Enter Admin Username: ";
        cin >> eid;
        if (id == eid)
        {
            cout << "\nEnter Admin Password: ";
            cin >> pass;
            if (pass == password)
            {
                mainMenu();
                firstPage();
            }

            else
            {
                cout << "Password is wrong, Please try again!" << endl;
                firstPage();
            }
        }

        else
        {
            cout << "Entered Admin ID is wrong, Please Try Again!" << endl;
            firstPage();
        }

        break;
    }

    case 2:
    {
        cout << "\n_______________________________________________________________________________" << endl;
        cout << "WELCOME TO USER MODE" << endl;
        cout << "\t1. Create New Account" << endl;
        cout << "\t2. Login using existing account" << endl;
        cout << "\n\tSelect: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string uid, upass;
            cout << "__________________________________________________________________________________" << endl;
            cout << "______________________________CREATING NEW ACCOUNT_________________________________" << endl;
            cout << "\nEnter the New ID: ";
            cin >> uid;
            cout << "\nEnter Password: ";
            cin >> upass;

            fstream f("user.txt", ios::app);
            f << uid << " " << upass << endl;
            f.close();
            cout << "New User ID created!";
            cout << "Your User ID is " << uid << " and password is " << upass << endl;
            cout << "Use this as Login Credentials!" << endl
                 << endl;
            firstPage();

            break;
        }

        case 2:
        {
            cout << "__________________________________________________________________________________" << endl;
            cout << "__________________________________LOGING IN_______________________________________" << endl;

            string uid, upass;
            string cuid, cupass;

            cout << "\nEnter ID: ";
            cin >> uid;

            cout << "\nEnter Password: ";
            cin >> upass;

            fstream f1("user.txt", ios::in);
            while (!f1.eof())
            {

                f1 >> cuid >> cupass;
                cout << endl;

                if (uid == cuid && upass == cupass)
                {
                    cout << "\nCredentials Matched!" << endl;
                    cout << "\n_____________________________________________________________________________________" << endl;
                    mainMenu2();
                    firstPage();
                    return;
                }
            }

            cout << "Please enter correct details" << endl;
            cout << "\n_____________________________________________________________________________________" << endl;
            firstPage();

            break;
        }

        default:
            break;
        }

        break;
    }

    case 3:
    {

        cout << "___________________Thanks for using XYZ Railways_____________________" << endl
             << endl;
        exit(0);
    }
    }
}

class Details
{
public:
    static string name[6], gender[6];
    int phoneNo;
    static int age[6];
    static string bp[6];
    static int cId[6];
    char arr[100];
    static int pnr;
    static int n;

    void information()
    {
        srand(time(NULL));
        pnr = 1000000000 + (rand() % 9000000000);
        cout << "\nYour PNR number is: " << pnr << endl;
        cout << "\nEnter the number of passengers: ";
        cin >> n;
        if (n > 6)
        {
            cout << "You can book tickets for only 6 passengers in a ticket!" << endl
                 << endl;
            mainMenu();
        }
        for (int i = 0; i < n; i++)
        {

            cout << "\n Enter the customer ID :";
            cin >> cId[i];

            cout << "\n Enter the Name :";
            cin >> name[i];
            cout << "\n Enter the age :";
            cin >> age[i];
            cout << "\n Enter Birth Preference :";
            cin >> bp[i];
            cout << "\n Gender:";
            cin >> gender[i];
        }

        cout << "Yours details are saved with us.\n";
        cout << "Your PNR number is: " << pnr << endl;
        cout << "Please use this PNR number to book tickets!" << endl
             << endl;
    }
};

int Details::cId[6];
string Details::name[6];
string Details::gender[6];
int Details::pnr;
string Details::bp[6];
int Details::age[6];
int Details::n;

class registration : public Details
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void trains()
    {
        string trainsN[] = {"ISLAMABAD", "KARACHI", "LAHORE", "PESHAWAR", "QUETTA", "FAISALABAD"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".train to " << trainsN[a] << endl;
        }

        cout << "\nWELCOME TO THE RAIWAYS!" << endl;
        cout << "Press the number of the city you want to book the train:";
        cin >> choice;
        int f;

        switch (choice)
        {
        case 1:
        {
            cout << "_WELCOME TO ISLAMABAD_\n"
                 << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                 << endl;

            cout << " 1.ISB-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;
            cout << " 2.ISB-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.ISB-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2100;
                }
                else if (f == 2)
                {
                    charges = 3100;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN ISB-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3300;
                }
                else if (f == 1)
                {
                    charges = 5400;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN ISB-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3500;
                }
                else if (f == 1)
                {
                    charges = 5100;
                }
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN ISB-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }
        case 2:
        {
            cout << "_WELCOME TO KARACHI_\n"
                << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                << endl;

            cout << " 1.KHI-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.2200 2A-Rs.3200 1A-Rs.5300" << endl;
            cout << " 2.KHI-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2400 2A-Rs.3400 1A-Rs.5500" << endl;
            cout << " 3.KHI-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2500 2A-Rs.3600 1A-Rs.5600" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2200;
                }
                else if (f == 2)
                {
                    charges = 3200;
                }
                else if (f == 1)
                {
                    charges = 5300;
                }

                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KHI-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3400;
                }
                else if (f == 1)
                {
                    charges = 5500;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KHI-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2500;
                }
                else if (f == 2)
                {
                    charges = 3600;
                }
                else if (f == 1)
                {
                    charges = 5600;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN KHI-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }
        case 3:
        {
            cout << "_WELCOME TO LAHORE_\n"
                << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                << endl;

            cout << " 1.LHR-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;
            cout << " 2.LHR-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.LHR-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2100;
                }
                else if (f == 2)
                {
                    charges = 3100;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }

                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN LHR-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3300;
                }
                else if (f == 1)
                {
                    charges = 5400;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN LHR-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2400;
                }
                else if (f == 2)
                {
                    charges = 3500;
                }
                else if (f == 1)
                {
                    charges = 5100;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN LHR-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 4:
        {
            cout << "_WELCOME TO PESHAWAR_\n"
                << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                << endl;

            cout << " 1.PEW-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.2000 2A-Rs.3000 1A-Rs.5100" << endl;
            cout << " 2.PEW-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2200 2A-Rs.3200 1A-Rs.5300" << endl;
            cout << " 3.PEW-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2300 2A-Rs.3400 1A-Rs.5200" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 2000;
                }
                else if (f == 2)
                {
                    charges = 3000;
                }
                else if (f == 1)
                {
                    charges = 5100;
                }

                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN PEW-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2200;
                }
                else if (f == 2)
                {
                    charges = 3200;
                }
                else if (f == 1)
                {
                    charges = 5300;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN PEW-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2300;
                }
                else if (f == 2)
                {
                    charges = 3400;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN PEW-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 5:
        {
            cout << "_WELCOME TO QUETTA_\n"
                << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                << endl;

            cout << " 1.QUE-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.1900 2A-Rs.2900 1A-Rs.5000" << endl;
            cout << " 2.QUE-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;
            cout << " 3.QUE-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2200 2A-Rs.3200 1A-Rs.5300" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 1900;
                }
                else if (f == 2)
                {
                    charges = 2900;
                }
                else if (f == 1)
                {
                    charges = 5000;
                }

                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN QUE-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2100;
                }
                else if (f == 2)
                {
                    charges = 3100;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN QUE-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2200;
                }
                else if (f == 2)
                {
                    charges = 3200;
                }
                else if (f == 1)
                {
                    charges = 5300;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN QUE-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }

        case 7:
        {
            cout << "_WELCOME TO FAISALABAD_\n"
                << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"
                << endl;

            cout << " 1.FSB-123 " << endl;
            cout << "\t08-01-2024  8:00AM  10hrs  3A-Rs.1800 2A-Rs.2800 1A-Rs.4900" << endl;
            cout << " 2.FSB-345 " << endl;
            cout << "\t09-01-2024  10:00AM  15hrs  3A-Rs.2000 2A-Rs.3000 1A-Rs.5100" << endl;
            cout << " 3.FSB-456" << endl;
            cout << "\t10-01-2024  11:00AM  20hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3)
                {
                    charges = 1800;
                }
                else if (f == 2)
                {
                    charges = 2800;
                }
                else if (f == 1)
                {
                    charges = 4900;
                }

                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN FSB-123" << endl;

                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3)
                {
                    charges = 2000;
                }
                else if (f == 2)
                {
                    charges = 3000;
                }
                else if (f == 1)
                {
                    charges = 5100;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN FSB-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3)
                {
                    charges = 2100;
                }
                else if (f == 2)
                {
                    charges = 3100;
                }
                else if (f == 1)
                {
                    charges = 5200;
                }
                cout << "\n YOU HAVE SUCCESSFULLY BOOKED THE TRAIN FSB-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

            break;
        }
        default:
        {
            cout << " INVALID input,Shifting you to the main menu !" << endl;
            mainMenu();
            break;
        }
        }
    }
};


float registration::charges;
int registration::choice;

class ticket : public registration
{

public:
    void Bill()
    {

        string destination[6];

        for (int i = 0; i < n; i++)
        {

            ofstream outf("tickets.txt", ios::app);
            {

                outf << pnr << "\t\t|";
                outf << cId[i] << "\t\t|";
                outf << name[i] << "\t|";
                outf << gender[i] << "\t|";

                if (registration::choice == 1)
                {
                    destination[i] = "ISLAMABAD";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "KARACHI";
                }

                else if (registration::choice == 3)
                {
                    destination[i] =  "LAHORE";
                }

                else if (registration::choice == 4)
                {
                    destination[i] =  "PESHAWAR";
                }

                else if (registration::choice == 5)
                {
                    destination[i] =  "QUETTA";
                }

                else if (registration::choice == 6)
                {
                    destination[i] =  "FAISALABAD";
                }

                outf << "CHN"
                     << "\t\t|";
                outf << destination[i] << "\t\t|";
                outf << registration::charges << "\t|";
                outf << endl;
            }

            outf.close();
        }
        cout << "Total Cost: " << charges * n;
    }

    void database()
    {
        string destination[6];

        for (int i = 0; i < n; i++)
        {

            ofstream outf("records.txt", ios::app);
            {

                outf << pnr << " ";
                outf << cId[i] << " ";
                outf << name[i] << " ";
                outf << gender[i] << " ";

                if (registration::choice == 1)
                {
                    destination[i] = "ISLAMABAD";
                }

                else if (registration::choice == 2)
                {
                    destination[i] = "KARACHI";
                }

                else if (registration::choice == 3)
                {
                    destination[i] = "LAHORE";
                }

                else if (registration::choice == 4)
                {
                    destination[i] = "PESHAWAR";
                }

                else if (registration::choice == 5)
                {
                    destination[i] = "QUETTA";
                }

                else if (registration::choice == 6)
                {
                    destination[i] = "FAISALABAD";
                }

                outf << destination[i] << " ";
                outf << registration::charges;
                outf << endl;
            }

            outf.close();
        }
    }

    void dispBill()
    {

        cout << "____XYZ Railways_____" << endl;
        cout << "____Tickets______" << endl;
        cout << "___________" << endl
             << endl;
        ;

        cout << "PNR Num\t\t\t|"
             << "Customer ID\t|"
             << "Name\t|"
             << "Gender\t|"
             << "Boarding\t|"
             << "Destination\t|"
             << "Charge\t|" << endl;

        ifstream ifs("tickets.txt");
        {
            if (!ifs)
            {
                cout << "File error!" << endl;
            }

            while (!ifs.eof())
            {

                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }

        ifs.close();
    }

    void dispDatabase()
    {
        string cpnr,cid,cname,cgen,cdest,ccharge;

        cout << "____XYZ Railways_____" << endl;

        cout << "____Tickets______" << endl;
        cout << "___________" << endl
             << endl;
        ;

        cout << "|PNR Num\t|"
             << "Customer ID\t|"
             << "Name\t\t|"
             << "Gender\t|"
             << "Destination\t|"
             << "Charge\t\t|" << endl;

        ifstream ifs;
        ifs.open("records.txt");

        while(ifs>>cpnr>>cid>>cname>>cgen>>cdest>>ccharge){
            cout<<"|"<<cpnr<<"\t|"<<cid<<"\t\t|"<<cname<<"\t\t|"<<cgen<<"\t|"<<cdest<<"\t\t|Rs. "<<ccharge<<"\t|"<<endl;
        }


        ifs.close();
        cout<<endl;
    }

    void deletedata()
    {
        ticket obj;
        int w;
        cout << "Enter PNR no.:" << endl;
        cin >> w;
        string line;
        int cpnr, ccharges, ccid;
        string cname, cgen, cdest;

        ifstream myfile;
        ofstream temp;
        myfile.open("records.txt");
        temp.open("temp.txt");
        while (myfile >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges)
        {

            if (cpnr != w)
                temp << cpnr << " " << ccid << " " << cname << " " << cgen << " " << cdest << " " << ccharges << endl
                     << flush;
        }
        cout << "The record with the name " << w << " has been deleted if it exsisted" << endl;
        myfile.close();
        temp.close();
        remove("records.txt");
        getchar();
        rename("temp.txt", "records.txt");
    }
};

class orderFood : public ticket
{

public:
    string fpnr, cpnr, cname, ccid, cgen, cdest, ccharges;
    int fcharges;

    void foodOptions()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "____________________WELCOME TO E-CATERING SERVICE_______________________" << endl
             << endl;
        cout << "\t1. View Menu and Order Food" << endl;
        cout << "\t2. Print Receipt" << endl;
        cout << "\t3. Back" << endl;
        cin >> choice1;
        cout << endl;

        switch (choice1)
        {
        case 1:
        {
            char filename[]="foodr.txt";
            remove(filename);
            getDetails();

            break;
        }

        case 2:
        {
            displayFoodReceipt();
            break;
        }

        case 3:
        {
            mainMenu2();
            
            break;
        }

        default:
        {
            cout << "Invalid Option! Try Again!" << endl;
            foodOptions();
        }
        }
    }

    void getDetails()
    {
        cout << "\n____________________________________________________________________" << endl;
        cout << "Enter Details to continue" << endl;
        cout << "\tEnter Your PNR number: ";
        cin >> fpnr;

        ifstream f1;
        f1.open("records.txt");
        do
        {
            if (f1.eof())
            {
                cout << "PNR does not match with our record!\nPlease Enter a valid PNR! " << endl;
                f1.close();
                getDetails();
            }

            f1 >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges;
            

        } while (cpnr != fpnr);
        f1.close();

        if (cpnr == fpnr)
        {
            cout << "Welcome " << cname << "! Please find the Menu!" << endl;
            displayMenu();
        }

        else
        {
            cout << "Try Again" << endl;
            getDetails();
        }
    }

void displayMenu()
{
    int fcharges = 0;
    cout << "\n____________________________________________________________________" << endl;
    cout << "____________________________PAKISTANI FOOD MENU______________________" << endl
         << endl;

    cout << "\t|S.no."
         << "\t|Item Name"
         << "\t\t\t\t|Price"
         << "\t\t|" << endl;
    cout << "\t|1."
         << "\t|Simple Aloo Bhurji"
         << "\t\t\t|Rs. 190"
         << "\t\t|" << endl;
    cout << "\t|2."
         << "\t|Special Chicken Biryani"
         << "\t\t\t|Rs. 210"
         << "\t\t|" << endl;
    cout << "\t|3."
         << "\t|Veg Vegetable Biryani"
         << "\t\t\t|Rs. 240"
         << "\t\t|" << endl;
    cout << "\t|4."
         << "\t|Simple Non-Veg Biryani"
         << "\t\t\t|Rs. 210"
         << "\t\t|" << endl;
    cout << "\t|5."
         << "\t|Special Nan Chana"
         << "\t\t\t|Rs. 250"
         << "\t\t|" << endl;
    cout << "\t|6."
         << "\t|Simple Chana Chat"
         << "\t\t\t|Rs. 270"
         << "\t\t|" << endl;
    cout << "\t|7."
         << "\t|Simple Halwa Puri"
         << "\t\t|Rs. 210"
         << "\t\t|" << endl;
    cout << "\t|8."
         << "\t|Special Chai"
         << "\t\t|Rs. 70"
         << "\t\t|" << endl;

    int choicess[8], noOfItems;
    cout << "Enter the number of Items you want to order: " << endl;
    cin >> noOfItems;

    for (int i = 0; i < noOfItems; i++)
    {
    tryagain:
        cout << "Enter your Choice " << i + 1 << ": ";
        cin >> choicess[i];
        cout << endl;

        fstream f2;
        fstream f3;

        f2.open("foodr.txt", ios::app);
        f3.open("foodd.txt", ios::app);

        switch (choicess[i])
        {
        case 1:
            cout << "\tSimple Aloo Bhurji ordered!" << endl;
            fcharges += 190;
            f2 << "\t|Simple Aloo Bhurji"
               << "\t\t"
               << "Rs. 190" << endl;
            f3 << cpnr << " Simple Aloo Bhurji"
               << " 190" << endl;
            break;

        case 2:
            cout << "\tSpecial Chicken Biryani ordered!" << endl;
            fcharges += 210;
            f2 << "\t|Special Chicken Biryani"
               << "\t\t"
               << "Rs. 210" << endl;
            f3 << cpnr << " Special Chicken Biryani"
               << " 210" << endl;
            break;

        case 3:
            cout << "\tVeg Vegetable Biryani ordered!" << endl;
            fcharges += 240;
            f2 << "\t|Veg Vegetable Biryani"
               << "\t\t"
               << "Rs. 240" << endl;
            f3 << cpnr << " Veg Vegetable Biryani"
               << " 240" << endl;
            break;

        case 4:
            cout << "\tSimple Non-Veg Biryani ordered!" << endl;
            fcharges += 210;
            f2 << "\t|Simple Non-Veg Biryani"
               << "\t\t"
               << "Rs. 210" << endl;
            f3 << cpnr << " Simple Non-Veg Biryani"
               << " 210" << endl;
            break;

        case 5:
            cout << "\tSpecial Nan Chana ordered!" << endl;
            fcharges += 250;
            f2 << "\t|Special Nan Chana"
               << "\t\t"
               << "Rs. 250" << endl;
            f3 << cpnr << " Special Nan Chana"
               << " 250" << endl;
            break;

        case 6:
            cout << "\tSimple Chana Chat ordered!" << endl;
            fcharges += 270;
            f2 << "\t|Simple Chana Chat"
               << "\t\t"
               << "Rs. 270" << endl;
            f3 << cpnr << " Simple Chana Chat"
               << " 270" << endl;
            break;

        case 7:
            cout << "\tSimple Halwa Puri ordered!" << endl;
            fcharges += 210;
            f2 << "\t|Simple Halwa Puri"
               << "\t\t"
               << "Rs. 210" << endl;
            f3 << cpnr << " Simple Halwa Puri"
               << " 210" << endl;
            break;

        case 8:
            cout << "\tSpecial Chai ordered!" << endl;
            fcharges += 70;
            f2 << "\t|Special Chai"
               << "\t\t"
               << "Rs. 70" << endl;
            f3 << cpnr << " Special Chai"
               << " 70" << endl;
            break;

        default:
            cout << "Enter Valid Input!\n";
            f2.close();
            f3.close();
            goto tryagain;
            break;
        }

        f2.close();
        f3.close();
    }

    cout << "Order Placed Successfully! Please collect your Receipt by Print Receipt option!" << endl;
    system("pause");
    foodOptions();
}
    void displayFoodReceipt()
    {

        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________ORDER RECIEPT_________________________________" << endl
             << endl;

        cout << "\tPassenger Details:\n";
        cout << "\t|PNR Num\t\t|"
             << "Name\t|"
             << "Gender\t|"
             << "Boarding\t|"
             << "Destination\t|"
             << endl;
        cout << "\t|" << cpnr << "\t\t|" << cname << "\t|" << cgen << "\t|CHN\t\t|" << cdest << "\t\t|" << endl
             << endl;

        cout << "\tOrdered Food Details:\n";
        ifstream f4("foodr.txt");
        {
            if (!f4)
            {
                cout << "File error!" << endl;
            }

            while (!f4.eof())
            {

                f4.getline(arr, 100);
                cout << arr << endl;
            }
        }

        f4.close();
        system("pause");
        foodOptions();
    }

    void displayFoodDatabase()
    {

        string food1, food2, food3, price;

        cout << "\n________________________________________________________________________" << endl;
        cout << "____________________________FOOD DATABASE_________________________________" << endl
             << endl;

        cout << "\t|PNR no\t\t|Item Name\t\t\t\t|Price\t\t|" << endl;
        ;

        fstream f5("foodd.txt", ios::in);
        while (f5 >> cpnr >> food1 >> food2 >> food3 >> price)
        {

            cout << "\t|" << cpnr << "\t|" << food1 << " " << food2 << " " << food3 << "\t\t\t|Rs. " << price << "\t|" << endl;
            cout << flush;
        }

        f5.close();
        system("pause");
    }
};

void mainMenu()
{
    int lchoice;
    int schoice, back;

    cout << "\t               XYZ Railways " << endl
         << endl;
    cout << "\t_________________________Main Menu_______________________" << endl;

    cout << "\t___________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Train Booking              \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
    cout << "\t|\t Press 4 to display Database            \t|" << endl;
    cout << "\t|\t Press 5 to Cancel                      \t|" << endl;
    cout << "\t|\t Press 6 to view E-Catering Database    \t|" << endl;    
    cout << "\t|\t Press 7 exit                           \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t___________________________________________________________" << endl;

    cout << "Enter the Choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;
    orderFood f;
    // cancel c;

    switch (lchoice)
    {
    case 1:
    {
        char filename[] = "tickets.txt";
        remove(filename);

        cout << "____Customers___" << endl
             << endl;
        d.information();
        cout << "Press any key to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 2:
    {
        cout << "___Book a ticket in this section__" << endl
             << endl;
        r.trains();
        break;
    }

    case 3:
    {
        cout << "____Getting your Ticket___" << endl
             << endl;
        t.Bill();

        cout << "Your Ticket is printed, you can collect it" << endl
             << endl;

        cout << "Press 1 to display your ticket ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            t.database();
            cout << "Press any key to go back" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
        }

        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        t.dispDatabase();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 5:
    {
        t.deletedata();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 7:
    {
        cout << endl
             << endl;

        return;
        break;
    }

    case 6:
    {
        f.displayFoodDatabase();
        mainMenu();

        break;
    }

    default:
    {
        cout << "Invalid Input, Please try again!" << endl
             << endl;
        mainMenu();
        break;
    }
    }
}


void mainMenu2()
{
    int lchoice;
    int schoice, back;

    cout << "\t               XYZ Railways " << endl
         << endl;
    cout << "\t_________________________Main Menu_______________________" << endl;

    cout << "\t___________________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;

    cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
    cout << "\t|\t Press 2 for Train Booking              \t|" << endl;
    cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;

    cout << "\t|\t Press 4 to Cancel                      \t|" << endl;
    cout << "\t|\t Press 5 to order food                  \t|" << endl;

    cout << "\t|\t Press 6 exit                           \t|" << endl;
    cout << "\t|\t\t\t\t\t\t\t|" << endl;
    cout << "\t____________________________________________________________" << endl;

    cout << "Enter the Choice: ";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;
    orderFood f;

    switch (lchoice)
    {
    case 1:
    {
        char filename[] = "tickets.txt";
        remove(filename);

        cout << "____Customers___" << endl
             << endl;
        d.information();
        cout << "Press any key to go back to the Main Menu" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 2:
    {
        cout << "___Book a ticket in this section__" << endl
             << endl;
        r.trains();
        break;
    }

    case 3:
    {
        cout << "____Getting your Ticket___" << endl
             << endl;
        t.Bill();

        cout << "Your Ticket is printed, you can collect it" << endl
             << endl;

        cout << "Press 1 to display your ticket ";
        cin >> back;

        if (back == 1)
        {
            t.dispBill();
            t.database();
            cout << "Press any key to go back" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }

            else
            {
                mainMenu();
            }
        }

        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        t.deletedata();
        cout << "Press any key to go back" << endl;
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }

        else
        {
            mainMenu();
        }

        break;
    }

    case 5:
    {
        f.foodOptions();

        break;
    }

    case 6:
    {
        cout << endl
             << endl;

        firstPage();
        break;
    }

    default:
    {
        cout << "Invalid Input, Please try again!" << endl
             << endl;
        mainMenu();
        break;
    }
    }
};

int main()
{
    Management mobj;
 

    return 0;
}
