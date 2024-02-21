#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct car
{
    string name, brand;
    int door, seat;
    bool rented;
    int rentDays;
};
car cars[10];
int count = 0;
int num = 1;
void rentcar(int index)
{
    int day , rent;
    cout<<"One day charge of Rs: 100"<<endl;
    cout<<"Enter the day do you want to rent: ";
    cin>>day;
    rent = day*100;
    cout << "Total rental cost for " << day << " days: Rs. " << rent << endl;
    cars[index].rented = true; 
    cars[index].rentDays = day; 
}

void enterdata()
{
    system("cls");
    if (count < 10) 
    {
        cout << "Enter data of car " << num + count<<"\n\n";
        cout << "Enter car company name: ";
        cin.ignore();
        getline(cin, cars[count].name);
        cout << "Enter car brand: ";
        getline(cin, cars[count].brand);
        cout << "Enter car door: ";
        cin >> cars[count].door;
        cout << "Enter car seat: ";
        cin >> cars[count].seat;
        cars[count].rented = false; 
        cars[count].rentDays = 0; 
        count++;

        char choice;
        cout << "Do you want to rent this car? (Y/N): ";
        cin >> choice;
        if(choice == 'Y' || choice == 'y') {
            rentcar(count - 1); 
        }
    }
    else
    {
        cout << "You have entered data for 10 cars. Cannot enter more." << endl;
    }
}

void AllData()
{
    system("cls");
    cout<<setw(15)<<"Company Name "<<setw(20)<<"Brand Name "<<setw(20)<<"Car doors "<<setw(20)<<"Car seats "<<setw(15)<<"Rented "<<setw(15)<<"Rent Days\n";
    for(int i=0; i<count; i++)
    {
        cout<<setw(10)<<cars[i].name <<setw(22)<<cars[i].brand <<setw(20)<<cars[i].door <<setw(17)<<cars[i].seat<<setw(17)<<(cars[i].rented ? "Yes" : "No")<<setw(15)<<cars[i].rentDays<<"\n";
    }
    if(count == 0)
    {
        system("cls");
        cout<<"Please enter at least one car"<<endl;
    }
}

void deleteAllData()
{
    system("cls");
    count = 0; 
    cout << "All data deleted successfully." << endl;
}

void Sdelete()
{
    system("cls");
    int num;
    cout << "Enter the number of car: ";
    cin >> num;
    if (num >= 0 && num < count)
    {
        for (int i = num; i < count - 1; i++)
        {
            cars[i] = cars[i + 1];
        }
        count--;
        cout << "Car deleted successfully." << endl;
    }
    else
    {
        cout << "Invalid car number." << endl;
    }
}


int main()
{
    while(true)
    {
        cout<<"\n________________________________________\n";
        cout<<"|"<<setw(40)<<"|\n";
        cout<<"|  {1}  Enter Data"<<setw(23)<<"|\n";
        cout<<"|  {2}  Show Data"<<setw(24)<<"|\n";
        cout<<"|  {3}  Delete Data"<<setw(22)<<"|\n";
        cout<<"|  {0}  Exit"<<setw(29)<<"|\n";
        cout<<"|______________________________________|\n";
        string choice;
        cout<<"\nEnter your choice: ";
        cin >> choice;
        if(choice == "1")
        {
            enterdata();
        }
        else if(choice == "2")
        {
            AllData();
        }
        else if(choice == "3")
        {
            system("cls");
            cout<<"\n_______________________________________\n";
            cout<<"|"<<setw(40)<<"|\n";
            cout<<"|  {1}  Specific data"<<setw(20)<<"|\n";
            cout<<"|  {2}  ALl Data"<<setw(25)<<"|\n";
            cout<<"|______________________________________|\n";
            string del;
            cout<<"\nEnter your choice: ";
            cin>>del;
            if(del == "1")
            {
                Sdelete();
            }
            else if(del == "2")
            {
                deleteAllData();
            }
            else
            {
                cout<<"\nInvalid choice"<<endl;
            }   
        }
        else if(choice == "0")
        {
            cout << "Code by Saad Ali on Earth.\n\n" << endl;
            exit(0);
        }
        else
        {
            cout<<"\nInvalid choice"<<endl;
        }
    }
    return 0;
}
