#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For formatting output
using namespace std;

struct Commodity {
    string name;
    double price;
    int quantity;
};

class CommoditiesApp {
private:
    vector<Commodity> commodities;

public:
    void addCommodity() {
        Commodity commodity;
        cout << "Enter commodity name: ";
        cin.ignore();
        getline(cin, commodity.name);
        cout << "Enter price: ";
        cin >> commodity.price;
        cout << "Enter quantity: ";
        cin >> commodity.quantity;
        commodities.push_back(commodity);
        cout << "Commodity added successfully!\n";
    }

    void viewCommodities() {
        if (commodities.empty()) {
            cout << "No commodities available.\n";
            return;
        }
        cout << left << setw(20) << "Name" << setw(10) << "Price" << setw(10) << "Quantity\n";
        cout << "---------------------------------------\n";
        for (const auto &commodity : commodities) {
            cout << left << setw(20) << commodity.name
                 << setw(10) << fixed << setprecision(2) << commodity.price
                 << setw(10) << commodity.quantity << "\n";
        }
    }

    void updateCommodity() {
        string name;
        cout << "Enter the name of the commodity to update: ";
        cin.ignore();
        getline(cin, name);

        for (auto &commodity : commodities) {
            if (commodity.name == name) {
                cout << "Enter new price: ";
                cin >> commodity.price;
                cout << "Enter new quantity: ";
                cin >> commodity.quantity;
                cout << "Commodity updated successfully!\n";
                return;
            }
        }
        cout << "Commodity not found.\n";
    }

    void removeCommodity() {
        string name;
        cout << "Enter the name of the commodity to remove: ";
        cin.ignore();
        getline(cin, name);

        for (auto it = commodities.begin(); it != commodities.end(); ++it) {
            if (it->name == name) {
                commodities.erase(it);
                cout << "Commodity removed successfully!\n";
                return;
            }
        }
        cout << "Commodity not found.\n";
    }

    void menu() {
        while (true) {
            cout << "\nCommodities Management App Menu:\n";
            cout << "1. Add Commodity\n";
            cout << "2. View Commodities\n";
            cout << "3. Update Commodity\n";
            cout << "4. Remove Commodity\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    addCommodity();
                    break;
                case 2:
                    viewCommodities();
                    break;
                case 3:
                    updateCommodity();
                    break;
                case 4:
                    removeCommodity();
                    break;
                case 5:
                    cout << "Exiting the app. Goodbye!\n";
                    return;
                default:
                    cout << "Invalid choice. Please try again.\n";
            }
        }
    }
};

int main() {
    CommoditiesApp app;
    app.menu();
    return 0;
}
