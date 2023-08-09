#include <iostream>
#include <vector>
#include <string>

class Product {
public:
    std::string category;
    std::string name;
    Product(std::string cat, std::string n) : category(cat), name(n) {}
};

using namespace std;

int main() {
    vector<Product> products;

    cout << "Supermarket Billing System\n";
    cout << "1. Add Product\n";
    cout << "2. Display Products\n";
    cout << "3. Exit\n";

    while (true) {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string category, name;
            cout << "Enter category: ";
            cin.ignore();
            getline(cin, category);
            cout << "Enter product name: ";
            getline(cin, name);
            products.emplace_back(category, name);
            cout << "Product added successfully!\n";
        } else if (choice == 2) {
            if (products.empty()) {
                cout << "No products added yet.\n";
            } else {
                cout << "Products:\n";
                for (const auto& product : products) {
                    cout << product.category << ". " << product.name << ";\n";
                }
            }
        } else if (choice == 3) {
            cout << "Exiting program. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Please choose a valid option.\n";
        }
    }

    return 0;
}
