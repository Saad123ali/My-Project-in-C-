  #include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Product class to represent a glass product
class Product {
public:
    string name;
    double price;
    int quantity;

    // Constructor to initialize product attributes
    Product(string n, double p, int q) : name(n), price(p), quantity(q) {}

    // Function to calculate total cost for a product
    double getTotalCost() {
        return price * quantity;
    }
};

// GlassFactory class to manage products and calculate revenue
class GlassFactory {
private:
    vector<Product> products;

public:
    // Function to add a new product to the inventory
    void addProduct() {
        string name;
        double price;
        int quantity;

        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter product price: ";
        cin >> price;

        cout << "Enter product quantity: ";
        cin >> quantity;

        products.push_back(Product(name, price, quantity));
        cout << "Product added successfully!" << endl;
    }

    // Function to display all products and total revenue
    void displayProducts() {
        if (products.empty()) {
            cout << "No products in inventory." << endl;
            return;
        }

        double totalRevenue = 0.0;

        cout << "Product\t\tPrice\t\tQuantity\tTotal Cost" << endl;
        cout << "------------------------------------------------" << endl;

        for (const auto &product : products) {
            cout << product.name << "\t\t$" << product.price << "\t\t"
                 << product.quantity << "\t\t$" << product.getTotalCost() << endl;

            totalRevenue += product.getTotalCost();
        }

        cout << "------------------------------------------------" << endl;
        cout << "Total Revenue: $" << totalRevenue << endl;
    }
};

int main() {
    GlassFactory glassFactory;
    int choice;

    do {
        cout << "\nGlass Factory Management System" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                glassFactory.addProduct();
                break;

            case 2:
                glassFactory.displayProducts();
                break;

            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}

