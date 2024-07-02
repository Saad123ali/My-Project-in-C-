#include <iostream>
using namespace std;

int main() {
    int max_items = 10;
    double items[max_items][2];
    int itemCount = 0;
    int choice;

    do {
        cout << "Menu:"<<endl;
        cout << "1. New Sale"<<endl;
        cout << "2. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double total = 0;
                do {
                    cout << "Enter price for item " << itemCount + 1 << ": Rs ";
                    cin >> items[itemCount][0];
                    cout << "Enter quantity for item " << itemCount + 1 << ": ";
                    cin >> items[itemCount][1];
                    total += items[itemCount][0] * items[itemCount][1];
                    cout << "Running Total: Rs " << total << std::endl;

                    itemCount++;

                    if (itemCount < max_items) {
                        cout << "Do you want to add more items? (1 for Yes, 0 for No): ";
                        cin >> choice;
                    } else {
                        cout << "Maximum number of items reached.\n";
                        choice = 0;
                    }

                } while (choice == 1 && itemCount < max_items);

                cout << "\nTotal Bill: Rs " << total <<endl;

                double cashPaid;
                cout << "Enter cash paid: Rs ";
                cin >> cashPaid;

                double balance = cashPaid - total;
                cout << "Balance: Rs " << balance <<endl;

                itemCount = 0;

                break;
            }

            case 2:
            
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 2);

    return 0;
}
