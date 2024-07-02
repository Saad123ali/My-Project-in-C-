#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class PaymentRecord {
private:
    int *tokens;
    string *plateNumbers;
    double *amounts;
    bool *paid;
    int paymentsCount;
    int totalCapacity;
    double totalAmount;

public:
    PaymentRecord(int totalCap) : totalCapacity(totalCap), paymentsCount(0), totalAmount(0.0) {
        tokens = new int[totalCapacity];
        plateNumbers = new string[totalCapacity];
        amounts = new double[totalCapacity];
        paid = new bool[totalCapacity];
        for (int i = 0; i < totalCapacity; i++) {
            tokens[i] = 0;
            plateNumbers[i] = "";
            amounts[i] = 0.0;
            paid[i] = false;
        }
    }

    void recordPayment(string plate, int token, double amount) {
        if (paymentsCount < totalCapacity) {
            tokens[paymentsCount] = token;
            plateNumbers[paymentsCount] = plate;
            amounts[paymentsCount] = amount;
            paid[paymentsCount] = true;
            paymentsCount++;
            totalAmount += amount; // Update total amount
        } else {
            cout << "PaymentRecord: Cannot record payment, capacity reached.\n";
        }
    }

    void displayPayments() {
        cout << "\n\n\t\t\t*************** Payment Records ***************\n\n\n";
        cout << setw(10)<<"Plate No"<<setw(20)<<"Token No"<<setw(15)<<"Amount"<<setw(15)<<"Paid\n\n";
        for (int i = 0; i < paymentsCount; ++i) {
            cout << setw(9) << plateNumbers[i] << setw(18) << tokens[i] << setw(15) << "Rs" << amounts[i] << setw(14);
            if (paid[i]) {
                cout << "Yes\n";
            }
        }
        cout << "\n******************************************************************************************************\n";
        cout << "\n\tTotal Amount: Rs" << totalAmount << endl;
    }

    void deleteAllRecords() {
        paymentsCount = 0;
        totalAmount = 0.0;
        cout << "All payment records deleted.\n";
    }

    void saveToFile(const string &filename) {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << paymentsCount << endl;
            outFile << totalCapacity << endl;
            outFile << totalAmount << endl;
            for (int i = 0; i < paymentsCount; ++i) {
                outFile << plateNumbers[i] << endl;
                outFile << tokens[i] << endl;
                outFile << amounts[i] << endl;
                outFile << paid[i] << endl;
            }
            outFile.close();
            cout << "Payment records saved to file.\n";
        } else {
            cout << "Unable to open file for saving.\n";
        }
    }

    void loadFromFile(const string &filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> paymentsCount;
            inFile >> totalCapacity;
            inFile >> totalAmount;
            for (int i = 0; i < paymentsCount; ++i) {
                inFile >> plateNumbers[i];
                inFile >> tokens[i];
                inFile >> amounts[i];
                inFile >> paid[i];
            }
            inFile.close();
            cout << "Payment records loaded from file.\n";
        } else {
            cout << "Unable to open file for loading.\n";
        }
    }

    ~PaymentRecord() {
        delete[] tokens;
        delete[] plateNumbers;
        delete[] amounts;
        delete[] paid;
    }
};

int main() {
    PaymentRecord pr(5);

    pr.recordPayment("ABC123", 1, 100.0);
    pr.recordPayment("XYZ789", 2, 200.0);

    pr.displayPayments();

    pr.saveToFile("payments.txt");
    
    pr.deleteAllRecords();
    pr.displayPayments();

    pr.loadFromFile("payments.txt");
    pr.displayPayments();

    return 0;
}
